//WAP to write function of input and display array
#include<stdio.h>
void inputArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d", &arr[i]);
    }
} 
void displayArray(int arr[],int n)
{
    int i;
    printf("Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[100],n;
    printf("enter the size of array:");
    scanf("%d", &n);
    inputArray(arr, n);
    displayArray(arr, n);
    return 0;
}  
