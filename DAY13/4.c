//WAP to count even and odd elements 
#include<Stdio.h>
void countEvenOdd(int arr[],int n)
{
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Number of even elements=%d\n",even);
    printf("Number of odd elements=%d\n",odd);
}
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    countEvenOdd(arr,n);
    return 0;
}