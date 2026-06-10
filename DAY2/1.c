//WAP to find sum of digits of a number 
#include<stdio.h>
int main()
{
    int number,sum=0,rem;
    printf("enter a number");
scanf("%d",&number);
while(number>0)
{
    rem=number%10;
    sum=sum+rem;
    number=number/10;
}
printf("sum of digits is %d",sum);
return 0;
}