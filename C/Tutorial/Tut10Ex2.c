#include<stdio.h>

int main()
{
    char m,s;
    int a,o;
    printf("If You have Passed, Enter 'y' otherwise, Enter 'n'.\n");
    printf("Maths? and Science?, respectively:\n");
    scanf("%c\n",&m);
    scanf("%c",&s);
    a= (m=='y'&& s=='y');
    o= (m=='y'|| s=='y');
    if (a && o)    
    {
        printf("You will receive a reward of Rs.45");
    }
    
    else if (a || o)
    {
        printf("You will receive a reward of Rs.15");
    }
    else
    {
        printf("You will get Nothing.Better Luck Next Time.");
    }
    
    return 0;

}