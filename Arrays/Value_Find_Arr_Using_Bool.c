#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
  int index=0;// for finding index if vaue found..
    printf("Enter an array Size:");
    scanf("%d", &n);
    int arr[n];
  bool flag=false; // value not exist
    for (int i = 0; i < n; i++) {
      printf("Enter value in index %d:", i);
      scanf("%d", &arr[i]); // Fill the array with user-provided values
    }
  int x;
  printf("Enter Value To find in array:");
  scanf("%d",&x);
  for(int i=0;i<n;i++){
     if(arr[i]==x){
      flag=true;
      index=i;
     }

    }
  if(flag==true){
     printf("Value found at index %d",index);
  }
  else{
     printf("Value Not Found");
  }
  return 0;
}
