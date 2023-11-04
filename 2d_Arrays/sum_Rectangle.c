#include <stdio.h>

int main() {
    int r, c;
    printf("Enter no. of Rows: ");
    scanf("%d", &r);
    printf("Enter no of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++) {
        printf("Enter Values in %d row: ", i + 1);
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    int l1, r1, L2, R2;
    printf("ENTER THE VALUE OF L1 R1 L2 R2 (SPACE SEPARATED): ");
    scanf("%d %d %d %d", &l1, &r1, &L2, &R2);

    for (int i = l1 - 1; i < L2; i++) { // Iterate over the rows
        for (int j = r1 - 1; j < R2; j++) { // Iterate over the columns
            sum += arr[i][j];
        }
    }

    printf("Sum Of Rectangle is -> %d", sum);

    return 0;
}
