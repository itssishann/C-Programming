//q  Rotate the given Array by ‘k’ steps
#include <stdio.h>
void reverse(int arr[], int start,int end){ // start is 0th element and end is n-1th element
  for(int i=start,j=end;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
  }
  return;
};
int main(void) {
  int n;
  printf("Enter Array Size:");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){ //input array elements
    printf("Enter Value In %d Index:",i+1);
    scanf("%d",&arr[i]);
  }
 int k;
  printf("Enter No. Of Rotate Elements:");
  scanf("%d",&k);
  k=k%n; //Ensure k is within the array size by taking its modulo n
  reverse(arr,0,n-1);
  reverse(arr,0,k-1);
reverse(arr,k,n-1);
  for(int i=0;i<n;i++){ //printing array
    printf("%d, ",arr[i]);
  }
  return 0;
}
