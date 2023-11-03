#include <stdio.h>

int main() {
  int n;
  printf("Enter an Number:");
  scanf("%d",&n);
int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter Value in index %d:",i);
    scanf("%d",&arr[i]);
  }
  int x;
  printf("Enter Number to Find Exist In Array or Not");
  scanf("%d",&x);
  for(int i=0;i<n;i++){
    //for checking missing value in array
    if(arr[i]==x){
      printf("%d Value Exist In Index %d",x,i);
      break;
    }
  }
  return 0;
}
