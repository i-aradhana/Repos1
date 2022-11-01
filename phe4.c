#include<stdio.h>
 
void modify(int arr[], int n)
{
    if (n <= 1)
      return;
    int prev = arr[0];
    arr[0] = arr[0] * arr[1];
    for (int i=1; i<n-1; i++)
    {
        int curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    arr[n-1] = prev * arr[n-1];
}

int main()
{
    int a[80],n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("The array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    modify(a, n);
    printf("\nRequired array:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}