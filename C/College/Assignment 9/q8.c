#include<stdio.h>
int binary(int n)
{
    int a=n%2;
    if(n==1)return 1;
    
    return (binary(n/2)*10+a);
}
int main(){
    int num;
    printf("Enter the decimal no. : ");
    scanf("%d",&num);
    long int bin=binary(num);
    printf("Binary equivalent of %d is : %ld\n",num,bin);

    return 0;
}