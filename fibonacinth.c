#include <stdio.h>

int main() {
    int n;
    printf("FIBONACCI NUMBERS\n ");
    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    int a = 1, b = 1;

    if (n >= 1)
        printf("Fibonacci of 1 Term is %d\n  ", a);
    if (n >= 2)
        printf("Fibonacci of 2 Term is %d\n ", b);

    for (int i = 3; i <= n-2; i++) {
        int sum = a + b;
        printf("Fibonacci of %d Term is %d\n ", i, sum);
        a = b;
        b = sum;
    }

    return 0;
}
