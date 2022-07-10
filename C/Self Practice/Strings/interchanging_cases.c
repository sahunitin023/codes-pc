#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((int)str[i] >= 97 && (int)str[i] < 123)
        {
            str[i] = (char)((int)str[i] - 32);
        }
        else if ((int)str[i] >= 65 && (int)str[i] < 91)
        {
            str[i] = (char)((int)str[i] + 32);
        }
    }
    puts(str);
    return 0;
}