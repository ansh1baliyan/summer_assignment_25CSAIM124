//WAP to find duplicates in array
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,2,4,5,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Duplicate elements are:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=1+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}