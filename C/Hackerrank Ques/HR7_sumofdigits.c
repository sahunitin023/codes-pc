#include <stdio.h>

int main() {
	
    int n,a,sum=0;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        a=n%10;
        n/=10;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
