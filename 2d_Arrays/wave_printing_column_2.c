// q-> Wave printing of 2d array br column wise and row changing
#include <stdio.h>
int main(void)
{
    int r, c;
    printf("Wave Printing 2d Array\n");
    printf("Enter the No. of Rows in the Matrix: ");
    scanf("%d", &r);
    printf("Enter the No. of Columns in the Matrix: ");
    scanf("%d", &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    { // 2d matrices cell filling..
        printf("Enter the  %d cell Values in the Matrix:", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n Array By User -> \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // wave prining
    printf("Wave Printing -> \n");
    for (int j = 0; j < c; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < r; i++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int i = r - 1; i >= 0; i--)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
/*
output>> 
      >> Array By User -> 
      >> 1 2 3 
      >> 6 5 4 
      >> 9 6 3 
      >> Wave Printing -> 
      >> 1 6 9 
      >> 6 5 2 
      >> 3 4 3 */
