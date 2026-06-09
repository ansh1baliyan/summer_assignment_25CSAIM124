//WAP to calculate the sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d natural numbers is %d",n,sum);
    return 0;
}