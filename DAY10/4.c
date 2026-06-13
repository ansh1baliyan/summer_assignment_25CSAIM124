//WAP to print character pyramid
 #include<stdio.h>
 int main()
 {
    int rows=5;
    int i,j,k;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c",'A'+j);
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
 }