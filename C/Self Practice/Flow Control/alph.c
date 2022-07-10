#include<stdio.h>

int main()
{
    char i;
    printf("Enter a character: ");
    scanf("%c", &i);
    if ((i>='A' && i<='Z') || (i>='a' && i<='z'))
    {
        printf("Yes!! It's an Alphabet.");
    }
    else 
    {
        printf("No!! It's not an Alphabet.");
    }
    
    return 0;
}

