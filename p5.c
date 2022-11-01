#include<stdio.h>

int main()
{
    int arr[80];
    int n,i,a,b,c=0,d=0;

    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    printf("\nEnter lower limit element & upper limit element respectively:\n ");
    scanf("%d %d",&a,&b);

    for(i=0;i<n;i++){ 
        if(arr[i]==a || arr[i]==b){
            c++;
            d=0;
        }
        
        if(arr[i]>a && arr[i]<b){
            c++;
        }
    }

    printf("Number of elements in between two elements (Both Inclusive) = %d",c+d);

    return 0;
}
