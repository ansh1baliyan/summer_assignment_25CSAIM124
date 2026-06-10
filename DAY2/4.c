//WAP to check whether a number is palindrome 
#include<stdio.h>
int main()
{
int num,rev=0,temp;
printf("enter anumber");     
scanf("%d",&num);
temp=num;
while(temp!=0)
{
    rev=rev*10+temp%10;
    temp=temp/10;
    if(rev==num)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    }
    
}


