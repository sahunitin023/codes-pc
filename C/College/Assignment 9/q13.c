#include<stdio.h>
int main()
{
    int n;
    printf("Enter order of square matrix : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements in Matrix : \n");
    int i,j,sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if((i+j)==(n-1))
                sum+=arr[i][j];
        }
    }
    printf("The Matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    printf("Sum of the right Diagonal is : %d\n",sum);

}