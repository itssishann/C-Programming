#include <stdio.h>

int main() {
printf("2d Array Storing Roll Number and 4 Subjects Marks:\n");
  int r,c=4;
  printf("Enter No of Students:");
  scanf("%d",&r);

  int arr[r][c];
  for(int i=0;i<r;i++){
      printf("Enter Roll Number and Marks for Student %d (space-separated)",i+1);
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n**Student Report**\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
  printf("\n");
  }
  return 0;
}