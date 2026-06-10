//WAP to find products of digits
#include<stdio.h>
int main()
{
    int n,product=1,rem;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        product=product*rem;
        n=n/10;
    }
printf("product of digits is %d",product);
return 0;
}