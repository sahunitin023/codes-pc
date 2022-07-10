#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, sum=0;
    scanf("%d", &x);
    int n[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &n[i]);
        sum+=n[i];
    }
    printf("%d", sum);
    return 0;
}