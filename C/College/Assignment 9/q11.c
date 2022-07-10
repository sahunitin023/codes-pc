#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a[n],b[n],c[2*n];
    int i,j;
    printf("Enter values in first matrix : ");
    for(i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Enter values in second matrix : ");
    for(i=0;i<n;i++)
        scanf("%d",(b+i));
    //merging
    for(i=0;i<2*n;i++)
    {
        if(n>i)c[i]=a[i];
        else c[i]=b[i-n];
    }
    //sorting in descending order
    for(i=0;i<2*n;i++){
        for(j=0;j<2*n-i-1;j++){
            if(c[j]<c[j+1]){
                int tmp=c[j];
                c[j]=c[j+1];
                c[j+1]=tmp;
            }
        }
    }
    //printing
    printf("Array A : ");
    for(i=0;i<n;i++)printf("%d ",*(a+i));
    printf("\nArray B : ");
    for(i=0;i<n;i++)printf("%d ",*(b+i));
    printf("\nMerged and Sorted Array : ");
    for(i=0;i<2*n;i++)printf("%d ",*(c+i));

}
