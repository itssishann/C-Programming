//question -> add sum of two matrices
// output >> 16 16 16
//           16 16 16
//           16 16 16
#include <stdio.h>
int main(void) {
  int n;
  printf("Matrices Addition\n");
  printf("Enter the size of Matrices");
  scanf("%d",&n);
  int arr[n][n];
  int arr_2[n][n];
  for(int i=0;i<n;i++ ){ // 2d matrices cell filling..
    printf("Enter the First Matrices %d cell Values:",i+1);
    for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);  
    }
  } 
  for(int i=0;i<n;i++ ){ // 2d matrices second array cell filling..
    printf("Enter the Second Matrices %d cell Values:",i+1);
    for(int j=0;j<n;j++){
      scanf("%d",&arr_2[i][j]);  
    }
  } 
  for(int i=0;i<n;i++ ){ // 2d matrices for addition
    for(int j=0;j<n;j++){
     arr[i][j]=arr[i][j]+arr_2[i][j];
    }
  } 
  for(int i=0;i<n;i++ ){ // Printing Sum Of MATRICES
    for(int j=0;j<n;j++){
     printf("%d ",arr[i][j]);
    }
    printf("\n");
  } 
   return 0;
}