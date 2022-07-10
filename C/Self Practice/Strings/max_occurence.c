#include <stdio.h>
int main()
{
    char str[100], chr;
    gets(str);
    int s = 0;
    printf("Max occured character are ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if ((int)str[i] == (int)str[j])
            {
                count++;
            }
        }
        if (s <= count)
        {
            s = count;
            chr=str[i];
        }
    }
    printf("%c",chr);
    return 0;
}