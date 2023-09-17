#include <stdio.h>

int main() {
    int n,product=1;
    printf("FACTORIAL CALCULATE \n ");
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        product=product*i; 
    }
    printf(" the factorial of %d is %d",n,product);
   
    return 0;
    
}