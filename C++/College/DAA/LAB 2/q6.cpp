#include<iostream>
#include<string.h>
using namespace std;
int check(char *str,int n)
{
    static int temp;
    if(n-1<0)
        return temp;
    if((str[n-1]=='a')||(str[n-1]=='e')||(str[n-1]=='i')||(str[n-1]=='o')||(str[n-1]=='u')||(str[n-1]=='A')||(str[n-1]=='E')||(str[n-1]=='I')||(str[n-1]=='O')||(str[n-1]=='U'))
    {
        temp++;
    }
    check(str,n-1);
}
int main()
{
    char str[50];
    cout<<"Enter the String: ";
    gets(str);
    int len=strlen(str);
    cout<<"Total Number of Vowels: "<<check(str,len);
}