//WAP to convert binary to decimal
#include<stdio.h>
int main()
{
    int n,decimal=0,i=0,rem;
    printf("enter a binary number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        decimal=decimal+rem*pow(2,i);
        n=n/10;
        i++;
    }
    printf("decimal number is %d",decimal);
    return 0;
}
