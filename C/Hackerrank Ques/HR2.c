#include<stdio.h>

int main()
{
    char s[20], ch, sen[50];
    scanf("%c",&ch);
    scanf("%s\n",&s);
    fgets(sen,50,stdin);
  
    printf("%c\n%s\n%s",ch,s,sen);
  
    return 0;

}