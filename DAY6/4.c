//WAP to to find x^n without pow()
#include<stdio.h>
int main()
{
    int x,n,p=1;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter the power:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        p=p*x;
    }
    printf("%d^%d=%d",x,n,p);
    return 0;
}