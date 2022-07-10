#include <stdio.h>
int main()
{
    int spcl = 0, alph = 0, num = 0;
    char str[100];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((int)str[i] >= 48 && (int)str[i] < 58)
        {
            num++;
            continue;
        }
        if (((int)str[i] >= 65 && (int)str[i] < 91) || ((int)str[i] >= 97 && (int)str[i] < 123))
        {
            alph++;
            continue;
        }
        else
            spcl++;
    }
    printf("Alphabets= %d\tNumbers= %d\tSpecial Characters=%d",alph,num,spcl);
    return 0;
}