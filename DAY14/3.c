//WAP to second largest element
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    int secondlargest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    printf("second largest Number=%d\n",secondlargest);
    return 0;
}