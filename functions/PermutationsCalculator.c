#include <stdio.h>
// factorial calculator
int factorial (int x){
   int fact = 1;
   for (int i = 1; i <= x; i++)  {
    fact = fact*i;
   }
   return fact;
}
int main()
{
    
    printf("\t\t\t\t----Permutations Calculator (nPr)----\n");
    int n, r; // input formula= nPr = n!/(n-r)!
    printf("enter number n:");
    scanf("%d", &n);
    printf("enter number r:");
    scanf("%d", &r);
   // formula ==  nPr -> n!/(n-r)!
   if(n<r){ // check if n is less then r or not
    printf("Number n should be gretaer then r");
   } // give the result nPr if n is greater then r
   else{ 
int nPr= factorial(n)/(factorial(n-r));
    printf("%d",nPr);
}

    return 0;
}