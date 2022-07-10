#include<stdio.h>
int lcm(int a,int b,int max)
{
    if(max%a==0&&max%b==0)return max;
    return lcm(a,b,++max);
}
int main()
{
    int n1,n2;
    printf("Enter two no. : ");
    scanf("%d %d",&n1,&n2);
    int max=n1>n2?n1:n2;
    int res=lcm(n1,n2,max);
    printf("LCM of %d and %d is : %d \n",n1,n2,res);

    return 0;
}