// question transpose the array n*n;
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an Row / Column:");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    { // input array
        printf("Enter Values in %d Row", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) // transposing the array
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
printf("\nArray By User Is ->\n");
   for (int i = 0; i < n; i++) // printing array by user
    { 
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
printf("Transpose Array nXn is -> \n"); // printing array transposed
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
       printf("%d ",arr[i][j]);
    }
    printf("\n");
    
}

    return 0;
}