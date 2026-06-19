//WAP to find missing number in array
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,5};
    int n=5;
    int sum=0,expectedSum,missing;
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    expectedSum=n*(n+1)/2;
    missing=expectedSum-sum;
    printf("Missing number=%d\n", missing);
    return 0;
}