//WAP to write function for palindrome
#include<stdio.h>
int palindrome(int n)
{
    int rev=0,rem,temp;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(palindrome(num))
    printf("%d is a palindrome number",num);
    else
    printf("%d is not a palindrome number",num);
    return 0;
}