#include<stdio.h>
void main()
{
    int i=1,j=10,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(;1;j*10,i++)
    {
        num/=j;
        if (num==0)
        {
            printf("Number has %d Digits.", i);
            break;
        }  
    }
}

/*
while(num!=0)
    {
        num/=10;
        i++;
    }
    printf("Number of digits: %d", i);
*/