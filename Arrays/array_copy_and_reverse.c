//q  WAP to copy elements of array to another array in reverse order
#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int rev_arr[8];
    for (int i = 0; i < 8; i++)
    {
       rev_arr[i]=  arr[(8-1)-(i)];
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",rev_arr[i]);
    }
    return 0;
}
