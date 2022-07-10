#include <stdio.h>

int main()
{
	char s[100];
    printf("S=");
    fgets(s,100,stdin);
    printf("Hello, World\n%s",s);
  	return 0;
}
