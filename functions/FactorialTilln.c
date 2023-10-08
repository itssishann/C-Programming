#include<stdio.h>
int factorial(int input){
    int fact=1;
    for (int i = 1; i <=input; i++)
    {
        fact=fact*i;
        printf("Factorial of %d! =  %d\n",i,fact);
    }
}

int main(){
    printf("Factorial Till Input\n");
    int n;
    printf("Enter an Number");
    scanf("%d",&n);
    int facts=factorial(n); 
    printf("%d",facts);
    return 0;
}