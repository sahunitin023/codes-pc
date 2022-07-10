#include<stdio.h>
void func(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*a+*b;
    *b=temp-*b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ") ;
    scanf("%d %d",&a,&b);
    func(&a,&b);
    printf("a= %d  b=%d",a,b);
    return 0;
}