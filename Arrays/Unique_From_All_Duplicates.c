#include <stdio.h>
#include <stdbool.h>
int main() {
int arr[7]={1,2,3,4,3,2,1};
  int n=7;
  for(int i=0;i<n;i++){
    bool flag=false; // unique  exist
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        flag=true; // duplicate not exist
    }
    }
      if(flag==false){
        printf("Unique Value ->%d\n",arr[i]);
        break;
      }
  }
  return 0;
}
