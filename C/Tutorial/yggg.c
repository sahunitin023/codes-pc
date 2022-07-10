// C program to demonstrate the problem when
// fgets()/gets() is used after scanf()
#include <stdio.h>

int main()
{
	int x;
	char str[100];
	scanf("%d\n", &x);
	scanf("%s", &str);
	printf("x = %d, str = %s", x, str);
	return 0;
}
