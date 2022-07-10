// Q5) Check whether an Alphabet is Vowel or not.

#include <stdio.h>

int main()
{
    char chr;
    printf("Enter an alphabet: ");
    scanf("%c", &chr);

    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' 
       || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')
    {
        printf("It's a Vowel.");
    }

    else
    {
        printf("It's a Consonant.");
    }

    return 0;
}