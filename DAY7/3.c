// WAP to recursive sum of digits
#include <stdio.h>

int recursiveSum(int n) {
    if (n < 10)
        return n;
    return (n % 10) + recursiveSum(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (num < 0)
        num = -num;

    int sum = recursiveSum(num);
    printf("Recursive sum of digits = %d\n", sum);
    return 0;
}


