#include<stdio.h>

int main()
{
    int num,o,t,out;

    printf("Enter a Two digit number:");
    scanf("%d", &num);
    o= num%10;
    t= num/10;
    out=o*10 + t ;
    printf("The Swapped number is %d",out);

    return 0 ;


}
