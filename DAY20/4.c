//WAP to find column-wise sum
#include<stdio.h>
int main()
{
    int a[10][10],row,col,i,j,sum;
    printf("Enternumber of rows and columns:");
    scanf("%d%d", &row, &col);
    printf("Enter matrix elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nColumn-wise sum:\n");
    for(j=0;j<col;j++)
    {
        sum=0;
        for(i=0;i<row;i++)
        {
            sum+=a[i][j];
        }
        printf("Sum of column %d=%d\n",j+1,sum);
    }
    return 0;
}
