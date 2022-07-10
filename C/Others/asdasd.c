#include<stdio.h>
int main()
{
    int x=5;
    // int *ptr[10]=&x;
    int arr[4]={1,23,4,4};
    printf("%x ",&x);
    // printf("%x\n",*ptr);

    printf("%x\n",&arr[1]);
    printf("%x",(arr+1));
    return 0;
}