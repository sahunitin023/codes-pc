#include<stdio.h>
void capital(char* s)
{
    static int i=0;
    if(*(s+i)>=65 && *(s+i)<=90){
        printf("The first capital letter in the string is : %c\n",*(s+i));
        return;
    }
    i++;
    capital(s);
}
int main(){
    char str[100];
    printf("Enter the String : ");
    gets(str);
    capital(str);

    return 0;
}