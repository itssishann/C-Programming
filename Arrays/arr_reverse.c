#include <stdio.h>

int main(void){
    int n,count=0;
    printf("Reversing Array Using Index.\n");
    printf("Enter No. Of Elements Want In Array:");
    scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++) // for  array input
{
printf("Enter an Value In %d element:",i+1);
scanf("%d",&arr[i]);
}
printf("Orignal Array:\n");

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\nReverse Array\n");
for (int r = n-1; r >=0; r--) // for reverse the elements in array.
{
    printf("%d ",arr[r]); // print reverse array 
}
    return 0;
}