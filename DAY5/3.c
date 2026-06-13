//WAP to print factors of a number 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factors of %d are:",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}