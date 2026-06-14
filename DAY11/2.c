//WAP to write function to find maximum
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is the largest number",a);
    }
    else if(a<b)
    {
        printf("b is the largest number",b);
    }
    else
    {
        printf("both are equal");
    }
    return 0;
}