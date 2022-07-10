#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *ptr;
    int n,i,sum=0;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    ptr = (int*) calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
        sum+=*(ptr+i);
    }
    printf("The Array : ");
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));
    printf("\nThe sum of all the array elements is : %d\n",sum);
    free(ptr);    
    return 0;
}