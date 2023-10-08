#include <stdio.h>

void generateFibonacci(int limit) {
    int first = 0, second = 1, next=0;
    // eg.. if limit ==6 ->  0,1,1,2,3,5 
    
    printf("Fibonacci series up to %d terms: %d, %d, ", limit, first, second);

    for (int i = 3; i <= limit; i++) {
        next = first + second;
        printf("%d, ", next);

        first = second;
        second = next;
    }
}

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. Input shoul be greater than 0.\n");
    } else {
        generateFibonacci(n);
    }

    return 0;
}
