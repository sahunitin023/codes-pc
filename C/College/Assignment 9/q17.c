#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int roll;
    float cgpa;
};
int main()
{
    int n;
    printf("Enter the no. of students : ");
    scanf("%d",&n);
    struct student s[n];
    int i,j;
    for(i=0;i<n;i++){
        printf("Enter the name, id and cgpa of %dth student : ",(i+1));
       // gets(s[i].name);
        scanf("%s %d %f",&s[i].name,&s[i].roll,&s[i].cgpa);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(s[j].name,s[j+1].name)>0){
                struct student tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
        }
    }

    printf("Details of Students in descending order : \n");
    printf("          Name          Roll     CGPA\n\n");
    for(i=0;i<n;i++){
        printf("%14s         %d        %.2f\n",s[i].name,s[i].roll,s[i].cgpa);
    }
    
    return 0;
}