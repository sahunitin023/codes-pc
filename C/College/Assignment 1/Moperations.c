#include<stdio.h>

int main()
{
    int a, b, res;

    printf("Enter two Numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    res=a+b;
    printf("a= %d+%d=%d\n",a,b,res);
    res=a-b;
    printf("b= %d-%d=%d\n",a,b,res);
    res=a*b;
    printf("c= %d*%d=%d\n",a,b,res);
    res=a/b;
    printf("d= %d/%d=%d",a,b,res);
    return 0;
}