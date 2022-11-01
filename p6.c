#include<stdio.h>

void printNGE(int arr[],int n)
{
    int next,i,j;
    printf("\nThe final output is:\n");
    for(i=0;i<n;i++)
     
    {
        next=-1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
    printf("%d  ---->   %d\n",arr[i],next);
    }
}
int main()
{
    int a[80],n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printNGE(a,n);
    return 0;
}