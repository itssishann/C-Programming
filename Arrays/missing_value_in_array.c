//q Check if the given element in present in Array or not
#include <stdio.h>

int main() {
  int n;
  printf("Enter an array Size:");
  scanf("%d", &n);
  int arr[n];
  int sum = 0;

  for (int i = 0; i < n; i++) {
    printf("Enter value in index %d:", i);
    scanf("%d", &arr[i]); // Fill the array with user-provided values
  }

  printf("Array elements: ");
  for (int i = 0; i < n; i++) {
    printf("%d, ", arr[i]); // Print the array elements
  }

  for (int i = 0; i < n; i++) {
    sum = sum + arr[i]; // Calculate the sum of array elements
  }

int sum2 = (n * (n + 1)) / 2;// Calculate the expected sum from 1 to n+1
  int v_not = sum2 - sum; // Find the missing value

  printf("\nThis Value is Not exist in array-> %d\n", v_not); // Print the missing value

  return 0;
}
