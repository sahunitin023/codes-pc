#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], temp;
    printf("Enter a String:");
    gets(a);
    int x = strlen(a);
    printf("Sorted Array : ");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            if ((int)a[j] < (int)a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    puts(a);
    return 0;
}