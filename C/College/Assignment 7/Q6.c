#include<stdio.h>
void swap(int a , int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
int main()
{
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}