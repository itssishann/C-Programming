#include <stdio.h>

int main() {
    int n,product=1;
    printf("FACTORIAL CALCULATE \n ");
    printf("Enter The Number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        product=product*i; 
    printf(" factorial of %d is %d \n",i,product);
    }

   
    return 0;
    
}