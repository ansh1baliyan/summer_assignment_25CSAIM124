//WAP to print reverse pyramid 
#include<stdio.h>
int main()
{
    int rows=5;
    int i,j,k;
    for(i=rows;i>=1;i--)
    {
        for( j=0;j<rows-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
