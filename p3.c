#include <stdio.h>

int main() {
    int a[80];
    int n,num;
    printf("Enter the total no of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements of an array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search in the array:\n");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if (a[i]==num)
        {
            printf("The element %d is at address : %d",num,i);
        }
    } 
    return 0;
    
}