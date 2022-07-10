#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=1,b,d=1;
    // printf("%d,%d,%d",++a + ++a + a++,a++ + ++b,++d + d++ + a++);    
    // printf("%d,",++a + ++a + a++); //a=4
    // printf("%d,",a);
    // printf("%d,",a++ + ++b);   // a=5 b=2
    // printf("%d,",a);
    // printf("%d,",++d + d++ + a++); // a=6 
    // printf("%d",a);
    printf("%d", ++a + ++a + ++a + ++a);
    return 0;
}
