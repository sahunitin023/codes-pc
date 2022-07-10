#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int max;
    if (a>b) 
    {
        max=(c>a)?((c>d)?c:d):((a>d)?a:d);
    } 
    else {
        max=(c>b)?((c>d)?c:d):((b>d)?b:d);
    } 
    return max;  
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
