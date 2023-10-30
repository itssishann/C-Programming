//q - write a code to find a three pairs of number can be find by user input eg->  Enter An Number:8
  // (1),(2),(5)->1
  // (1),(3),(4)->2

#include <stdio.h>
int main(void) {
int arr[10]={1,2,3,4,5,6,7,8,9,11};
  int threePair=0,n;
  printf("Enter An Number:");
  scanf("%d",&n);
  for(int i=0;i<10;i++){
   for(int j=i+1;j<10;j++){
     for(int k=j+1;k<10;k++){
       if(arr[i]+arr[j]+arr[k]==n){
         threePair++;
         printf("(%d),(%d),(%d)->%d\n",arr[i],arr[j],arr[k],threePair);
       }
     }
   } 
  }
  return 0;
}
