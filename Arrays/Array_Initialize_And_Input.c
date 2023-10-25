#include <stdio.h>
int main(){
  // int arr[5+2] ={1,2,3,4,5,6,7};
  // printf("%p %p %p %p %p %p %p ",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6]); //checking address of an array
  
 // manually inser the value in the array 
  int arr_manually[5] ={2,4,5,6,7};
  printf("ARRAY DECLARED  AND INITIALIZE AT SAME TIME->\n");
  printf("%d, %d, %d, %d, %d \n",arr_manually[0],arr_manually[1],arr_manually[2],arr_manually[3],arr_manually[4]);

// applying through loop 
int array_loop[12];
    printf("Array Through Loop Fill Auto\n");
  for (int i=0 ;i<12;i++){
  array_loop[i]=i+1;
  printf("%d, ",array_loop[i]);
  }
printf("\n");
// user defined array
int n; // input
  
printf("enter no of elements want in array:");
  scanf("%d",&n);
  int arr_user[n];
  for(int i=0; i<n ;i++){
    printf("Enter an value in element %d->",i+1);
    scanf("%d",&arr_user[i]);
  }
  printf("Array Genrated By User Is-> \n");
  for(int i=0 ;i<n;i++){ //printing user based array
    printf("%d, ",arr_user[i]);
  }
  return 0;
}
