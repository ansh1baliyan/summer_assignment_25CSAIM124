
//WAP to write a function to check prime
#include <stdio.h>

int prime(int n)
{
    if (n<2)
    {
        return 0; 
    }
    
    for (int i=2; i<=n/2; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}


int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (prime(n))
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is NOT a prime number\n", n);
    }

    return 0;
}