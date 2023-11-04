
#include <stdio.h>
int main(void)
{
    int n;
    printf("MAX IN MATRIX \n");
    printf("Enter the size of Row");
    scanf("%d", &n);
    int c;
    printf("Enter the size of columns:");
    scanf("%d", &c);
    int arr[n][c];
    int row=0;
    int column=0;
    for (int i = 0; i < n; i++)
    { // value fill in 2d array
        printf("Enter Value in %d Cell:", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("2d Array ->\n");
    for (int i = 0; i < n; i++)
    { // printing 2d array
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
   int max = 0;
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < c; j++)
    {
       if(max<arr[i][j]){
        max=arr[i][j];
        row=i;
        column=j;
       }
    }
   }
   printf("Max Element in 2d Array Is -> %d at index (%d,%d)",max,row,column);
    return 0;
}