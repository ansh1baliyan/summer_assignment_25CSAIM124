//WAP to convert decimal to binary
#include<stdio.h>
int main()
{
    int n,binary,i=1;
    printf("enter a decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        binary=binary+(n%2)*i;
        n=n/2;
        i=i*10;
    }
    printf("binary number is:%d",binary);
    return 0;
}