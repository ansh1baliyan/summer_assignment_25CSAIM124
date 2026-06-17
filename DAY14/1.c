//WAP to linear search
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/ sizeof(arr[0]);
    int key,found=0;
    printf("Enter elements to search:");
    scanf("%d", &key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("element found at index %d\n",i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("Element not found\n");
    }
    return 0;
}




