#include <stdio.h>
    int main()
    {
 
        int i, j, a, n, num[30];
        printf("Enter the no of elements u want to sort: \n");
        scanf("%d", &n);
 
        printf("Enter the numbers: \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        printf("\n----------------------------------------------------------------------------\n");   
        printf("The array befor sorting is:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", num[i]);
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
 
        printf("\n\nArray after sorting is:\n");
        for (i = 0; i < n; i++)
            printf("%d ", num[i]);
 
    }
