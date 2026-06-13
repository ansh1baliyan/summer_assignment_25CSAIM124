//WAP to print repeated character pattern
#include<stdio.h>
int main()
{
    int i,j;
    int rows=5;
    for(i=0;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }
    return 0;
}