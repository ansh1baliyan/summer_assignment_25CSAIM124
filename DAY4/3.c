//WAP to  check armstrong number 
#include<stdio.h>
int main()
{
    int num,originalnum,rem,result=0;
    printf("enter a number:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        result+=rem*rem*rem;
        originalnum/=10;
    }
    if(result==num)
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);
    return 0;
}