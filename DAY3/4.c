//WAP to find LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    lcm=(a>b)?a:b;
    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            printf("lcm of %d and %d is %d",a,b,lcm);
            break;
        }
    }
}