//WAP to recursive fibonacci
#include <stdio.h>
int main()
{
    int number,first=0,second=1,next=0,sum=0;
    printf("enter maximum number for fibonacci series");
    scanf("%d",&number);
    printf("first %d fibonacci series number:\n",number);
    while(first<=number)
    {
        printf("%d",first);
        sum=sum+first;
        next=first+second;
        first=second;
        second=next;
    }
    printf("\n the sum of fibonacci series numbers=%d\n",sum);
}

