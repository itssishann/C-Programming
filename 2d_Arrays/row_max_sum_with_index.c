// 1 2 3 4 5 
// 9 2 2 8 3 
// 3 4 5 4 3 
// 9 2 5 1 4 
// 1 6 3 5 4 
// Max Sum -> 24 in Row -> 2
//question -> find the maximum sum in row and print the row index and sum..
#include <stdio.h>
int main(void) {
int arr[5][5]={{1,2,3,4,5},{9,2,2,8,3},{3,4,5,4,3},{9,2,5,1,4},{1,6,3,5,4}};
  int max=0;
  int index=0;
  printf("\nArray Is->\n");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<5;i++){
    int sum=0;
    for(int j=0;j<5;j++){
      sum+=arr[i][j];
      if(max<sum){
        max=sum;
        index=i+1;
      }
    }
  }
  printf("Max Sum -> %d in Row -> %d",max,index);
  return 0;
}