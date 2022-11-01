#include <stdio.h>

int MinDist(int arr[], int n, int x, int y)
{
    int i, j;
    int m=n+1;
    for (i=0; i<n-1; i++) {
        if (arr[i] == x) {
            for (j=i+1; j<n; j++) {
                if (arr[j] == x) {
                    i = j;
                }
                else if (arr[j] == y) {
                    if (j-i < m) {
                        m = j-i;
                    }
                }
            }
        }
    }
    return m;
}

int main() 
{
    int a[30],n,x,y;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value of x and y:\n");
    scanf("%d %d",&x,&y);
    printf("The array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int m = MinDist(a, n, x, y);
    printf("\nMinimum distance between %d and %d is : %d\n", x, y, m);

    return 0;
}

 