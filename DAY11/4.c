 //WAP to wirte function of a factorial
 #include<stdio.h>
int findfactorial(int a)
{
    int factorial=1;
    for(int i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int a;
    int result;
    printf("enter a number:");
    scanf("%d",&a);
    result=findfactorial(a);
    printf("the factorial of %d is %d\n",a,result);
    return 0;
}