//WAP to recursive reverse number
#include<stdio.h>
intreversenumber(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
rev=rev*10+(n%10);
return reversenumber(n/10,rev);
}
int main(void)
{
    int num;
    printf("enter a number:");
    if(scanf("%d",&num)!=1)
    {
        fprintf(stderr,"invalid input\n");
        return 1;
    }
    int reversed=reversenumber(num<0?-num:num,0);
    if(num<0)
    {
        reversed=-reversed;
    }
    printf("reversed number:%d\n",reversed);
    return 0;
}