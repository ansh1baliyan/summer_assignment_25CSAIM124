//WAP to find the largest prime factor
#include<stdio.h>
int main()
{
    int n,flag,largest=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int flag=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                largest=i;
            }
        }
    }
    printf("largest prime factor of %d is %d",n,largest);
    return 0;
}