#include <stdio.h>
//queston -> find smallest or min number in array
int main(void){
    int n,count=0;
    printf("MIN or SMALLEST NO. FINDER IN ARRAY.\n");
    printf("Enter No. Of Elements Want In Array:");
    scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
printf("Enter an Value In %d element:",i+1);
scanf("%d",&arr[i]);
}
int min=arr[0];
for (int i = 0; i <n; i++)
{
  if(min>arr[i]){
    count=i+1; 
    min=arr[i];
  }   
}
    printf("Min No. is in array Index %d  Is -> %d",count,min);



    return 0;
}