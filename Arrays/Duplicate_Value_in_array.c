#include <stdio.h>

int main() {
int arr[8]={1,2,3,4,5,6,7,6};
  int n=8;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        printf("Duplicate Value Found -> %d\n",arr[i]);
        break;
      }
    }
  }
  return 0;
}
//output >> Duplicate Value Found -> 6
