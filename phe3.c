#include <stdio.h>
void printArray (int a[], int n)
{
   for (int i = 0; i < n; i++)
   printf ("%d ", a[i]);
}
void replaceWithNextGreatest (int a[], int size)
{
   int max = a[size - 1];
   a[size - 1] = 0;
   for (int i = size - 2; i >= 0; i--){
   int temp = a[i];
   a[i] = max;
   if (max < temp)
   max= temp;
}
printf ("Array after modifying is:\n");
printArray (a, size);
}
int main ()
{
   int arr1[80],n;
   printf("Enter the size of array:\n");
   scanf("%d",&n); 
   printf("Enter the elememts:\n");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr1[i]);
   }
   printf ("The given array is : ");
   for (int i = 0; i < n; i++)
   {
    printf ("%d ", arr1[i]);
   }
   printf ("\n");
   replaceWithNextGreatest (arr1, n);
   return 0;
}
