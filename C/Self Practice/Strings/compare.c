#include <stdio.h>
int main()
{
    char str1[20], str2[20];
    gets(str1);
    gets(str2);
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("The difference between their ASCII values is %d",str1[i] - str2[i]);
            break;
        }
    }

    return 0;
}