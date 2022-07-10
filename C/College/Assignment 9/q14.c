#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p1=(int*) malloc(sizeof(int));
    char *p2=(char*) malloc(sizeof(char));
    float *p3=(float*) malloc(sizeof(float));
    printf("Enter an integer,a character and a floating no. : \n");
    scanf("%d %c %f",p1,p2,p3);
    printf(" The integer : %d\n",*p1);
    printf(" The character : %c\n",*p2);
    printf(" The floating no. : %f\n",*p3);

    return 0;
}