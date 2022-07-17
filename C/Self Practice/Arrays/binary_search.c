#include <stdio.h>
void search(int A[], int x, int low, int high)
{
    int mid = (low + high) / 2;
    if (A[mid] < x)
    {
        search(A, x, mid + 1, high);
    }
    else if (A[mid] > x)
    {
        search(A, x, low, mid);
    }
    else if (A[mid] == x)
    {
        printf("%d ", mid);
        int i = mid, j = mid;
        while (A[--i] == x)
        {
            printf("%d ", i);
        }
        while (A[++j] == x)
        {
            printf("%d ", j);
        }
        // OR
        // for (int i = mid - 1; A[i] == x; i--)
        //     printf("%d ", i);
        // for (int i = mid + 1; A[i] == x; i++)
        //     printf("%d ", i);
    }
}
int main()
{
    int n, i, j, temp, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Sorted Array is:\n");
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Enter the you want to search: ");
    scanf("%d", &x);
    printf("The Loaction of the Element: ");
    search(a, x, 0, n - 1);
    return 0;
}