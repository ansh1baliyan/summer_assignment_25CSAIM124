//WAP to print armstrong numbers in a range
#include<stdio.h>
int main()
{
    int num,rem,arm=0,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        arm=arm+rem*rem*rem;
        temp=temp/10;
    }
    if(arm==num)
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);
    }
    return 0;
    }
