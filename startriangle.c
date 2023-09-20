// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world");
    int r,c;
    printf("ENTER ROW:");
    scanf("%d",&r);
    // printf("\n");
    // printf("ENTER colum:");
    // scanf("%d",&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n ");
    }

    return 0;
}