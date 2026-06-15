//WAP to write function for armstrong
#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
    int original=n,rem,sum=0,digits=0;
    int temp=n;
    while(temp>0)
    {
        rem=temp%10;
        sum+=pow(rem,digits);
        temp/=10;
    }
    return(sum==original);
    }
    int main()
    {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(armstrong(num))
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);
    return 0;
    }
