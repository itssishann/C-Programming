#include<stdio.h>
int main(){
    int totalPair = 0, n;
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    for (int i = 0; i < 10; i++)
    {
       printf("%d,",arr[i]);
    }
    printf("\nEnter An Number to Find Pairs:");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
       for (int j = i+1; j < 10; j++)
       {
          if(arr[i]+arr[j]==n){
            totalPair++;
            printf("(%d),(%d)->%d\n",arr[i],arr[j],totalPair);
          }
       }
       
    }
    
   
    return 0;
}