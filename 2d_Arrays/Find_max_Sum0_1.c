#include <stdio.h>

int main(void) {
  int arr[5][5]={{0,1,0,1,1},{1,1,1,0,1},{1,1,1,1,1},{1,0,1,0,1},{0,1,0,0,0}};
  
 int maxCount=0;
  int row=0;
  for (int i = 0; i < 5; i++){ 
     int count=0;
    for (int j = 0; j < 5; j++) {
        if(arr[i][j]==1){
            count++;
        }
        if(maxCount<count){
            maxCount=count;
            row=i;
        }
    }
    
  }
  printf("Max Sum is in row -> %d",row+1);
  return 0;
}