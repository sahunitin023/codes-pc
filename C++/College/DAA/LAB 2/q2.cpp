#include <iostream>
#include <string.h>
using namespace std;
int revstr(char *str,int n);
int main()
{
    char str[50];
    int len;
    cout << "Enter the string:";
    cin >> str;
    cout << "Before reversing the string:" << endl;
    cout << str << endl;
    len = strlen(str);
    revstr(str,len);
    return 0;
}
int revstr(char *str,int n)
{
    if(n-1<0)
        return 0;
    cout<<str[n-1];
    revstr(str,n-1);
}