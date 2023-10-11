#include<stdio.h>
int factorial(int n){
if(n==0 ) return 1;
   int  fact=n*factorial(n-1);
    return fact;
    }
int main(){
    int n;
    printf("Enter an Number");
scanf("%d",&n);

int result=factorial(n);
printf("%d",result);
    return 0;
}
