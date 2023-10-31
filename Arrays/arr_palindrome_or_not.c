#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    int isPalindrome = 1;  // Assume it's a palindrome

    for (int i = 0, j = 6; i < j; i++, j--) {
        if (arr[i] != arr[j]) { // if (i) not equal to != (j)  then no palindrome array
            isPalindrome = 0;
            break;  // No need to check further
        }
    }

    if (isPalindrome) {
        printf("Palindrome Array");
    } else {
        printf("Not a Palindrome Array");
    }

    return 0;
}
