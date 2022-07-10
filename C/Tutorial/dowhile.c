#include<stdio.h>

int main()
{
    int n,i=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    do{
        i++;
        printf("%d", i);
        
    } while (i<=n);
    
    return 0;
}
