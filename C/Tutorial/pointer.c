#include<stdio.h>
void main()
{
    int a = 3;
    int *ptr=&a;
    int **p=&ptr;
    printf("%p\n",&a);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
    printf("%p\n",*p);
    printf("%p\n",p);
    printf("%p",**p);
}
