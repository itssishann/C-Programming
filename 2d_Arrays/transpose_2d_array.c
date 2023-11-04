// que-> Print the transpose of a given matrix
#include<stdio.h>
int main(){
    int n; // for row
    int m; // for columns
    printf("Enter No Of Rows:");
    scanf("%d",&n); 
    printf("Enter No Of Columns:");
    scanf("%d",&m); 
    int arr[n][m];// arrays = n*m
    for (int i = 0; i < n; i++)
    {
        printf("Enter Values in %d Row: ",i+1);
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Array By User is->\n");
      for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        printf("%d ",arr[i][j]);
      }
      printf("\n");
    }
    printf("Transpose Array is->\n");
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ",arr[j][i]);
      }
      printf("\n");
    }
    
    
    return 0;
}
