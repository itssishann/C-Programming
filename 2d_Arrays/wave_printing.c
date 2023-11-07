// q-> Wave printing of 2d array
#include <stdio.h>
int main(void) {
  int r,c;
  printf("Wave Printing 2d Array\n");
  printf("Enter the No. of Rows in the Matrix: ");
  scanf("%d",&r);
  printf("Enter the No. of Columns in the Matrix: ");
  scanf("%d",&c);
  int arr[r][c];

  for(int i=0;i<r;i++ ){ // 2d matrices cell filling..
    printf("Enter the  %d cell Values in the Matrix:",i+1);
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);  
    }
  } 
  printf("\n Array By User -> \n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n Wave Printing -> \n");
  //printing wave
  for (int i = 0; i < r; i++){
    if(i%2==0){
    for (int j = 0; j < c; j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  else{
    for (int j = c-1; j >= 0; j--)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  }
 return 0;
}
// output>>
//   Array By User -> 
//   1 2 3 
//   4 5 6 
//   7 8 9 
//   Wave Printing -> 
//   1 2 3 
//   6 5 4 
//   7 8 9 

