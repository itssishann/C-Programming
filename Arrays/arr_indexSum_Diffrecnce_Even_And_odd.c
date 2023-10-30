//Ques : Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
int main(){
    int arr[6]={1,3,5,7,9,11};
    int sumEven=0,sumOdd=0,Diffrence=0;
    for (int i = 0; i < 6; i++)
    {
        if(i%2==0){
           sumEven+=arr[i];
        }
        else
        {
            sumOdd+=arr[i];
        }
        Diffrence=sumEven-sumOdd;
    }
        printf("Diffrence Between %d - %d is -> %d",sumEven,sumOdd,Diffrence);
    return 0;
}