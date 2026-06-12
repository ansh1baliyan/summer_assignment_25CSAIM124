//WAP to find nth fibonacci term
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("the %d term of fibonacci series is %d",n,a);
    }
    else if(n==1)
    {
        printf("the %d term of fibonacci series is %d",n,b);
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("the %d term of fibonacci series is %d",n,c);
    }
    }
