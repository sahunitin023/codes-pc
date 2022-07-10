#include <stdio.h>
void foo(int n, int sum)
{
    int k = 0, j = 0;
    if (n == 0)
        return;
    k = n % 10;
    j = n / 10;
    sum = sum + k;
    printf("%d,", k);
    foo(j, sum);
   
}
int main()
{
    int a = 2048, sum = 0;
    foo(a, sum);
    printf("%d\n", sum);
}

// int main()
// {
//  int arr[5];
//  // Assume base address of arr is 2000 and size of integer is 32 bit
//  printf("%u %u %u", arr,arr + 1, &arr + 1);
//  return 0;
// }
// main()
// {
//  int x = 65, *p = &x;
//  int (*ptr)[10];
//  void *q=p;
//  char *r=q;
//  printf("%c",*r);
// }

// int main()
// {
//     int *ptr[3];
//     ptr[0]=3;
//     ptr[1]=7;
//     ptr[2]=11;
//     printf("%d",ptr[1]);
//     return 0;
// }