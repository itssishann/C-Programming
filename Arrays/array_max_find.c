#include <stdio.h>
//queston -> find greatest or max number in array
int main(void){
    int n,count=0;
    printf("MAX or LARGEST NO. FINDER IN ARRAY.\n");
    printf("Enter No. Of Elements Want In Array:");
    scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
printf("Enter an Value In %d element:",i+1);
scanf("%d",&arr[i]);
}
int max=arr[0];
for (int i = 0; i <n; i++)
{
    if(max<arr[i]){
        max=arr[i];
        count=i+1;
    }
}
    printf("Max No. is in array Index %d  Is -> %d",count,max);



    return 0;
}