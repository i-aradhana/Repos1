#include<stdio.h>

int main()
{
   int a[100],n,temp;
   printf("Enter the size of array:\n");
   scanf("%d",&n);
   printf("Enter the elements:\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Array before reversal is:\n");
   for(int i=0;i<n;i++)
   {
       printf("%d  ",a[i]);
   }
   for(int i = 0; i<n/2; i++)
   {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    printf("\nArray after reversal is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}