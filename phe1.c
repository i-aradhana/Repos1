#include <stdio.h>
int main()
{
 
    int i, j, a, n, num[30];
    printf("Enter the size of array:\n");
    scanf("%d", &n);
 
    printf("Enter the numbers: \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
 
    for (i = 0; i < n; i++)
    {
 
        for (j = i + 1; j < n; j++)
        {
 
            if (num[i] > num[j]) 
            {
 
                a =  num[i];
                num[i] = num[j];
                num[j] = a;
 
            }
 
        }
 
    }
 
    printf("\n\nArray after sorting in ascending order is:\n");
        for (i = 0; i < n; ++i)
            printf("%d ", num[i]);
        
            
        printf("\nThe second smallest number is: %d",num[1]);
        printf("\nThe second largest element is: %d",num[n-2]);
 
}