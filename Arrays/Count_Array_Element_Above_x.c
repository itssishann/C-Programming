//Ques : Count the number of elements in given array greater than a given number x.
#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Enter No. Of Elements In Array:");
    scanf("%d",&n);
  int arr[n];
  for (int d = 0; d < n; d++) // array input
  {
  printf("Enter Data In %d Element:",d+1);
  scanf("%d",&arr[d]);
  }
  printf("\n Array Generated Is:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d, ",arr[i]);
  }
  int x; // for taking input then we will find the number which is greater then x in array and increment counter after that..
  printf("\nEnter an Number:");
  scanf("%d",&x);
  for (int i = 0; i < n; i++)
  {
   if(arr[i]>x){
    count++;
   }
  }
  printf("Number Which Is Greater Then user input %d in array is ->  %d",x,count);
  
    return 0;
}