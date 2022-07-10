#include<stdio.h>
int main(){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    printf("Enter the position(index value) which needs to be removed : ");
    int x;
    scanf("%d",&x);
    for(i=x;i<n-1;i++){
        int tmp=*(arr+i);
        *(arr+i)=*(arr+i+1);
        *(arr+i+1)=tmp;
    }
    *(arr+n-1)=NULL;
    //printing the new matrix
    printf("Element at x deleted....\n");
    printf("Matrix now : ");
    for(i=0;i<n-1;i++)
        printf("%d ",*(arr+i));
    printf("\n");

    return 0;
}