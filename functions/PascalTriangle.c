#include<stdio.h>
int factorial(int f){ // nCr or iCj n= coloumn r=row i=row, j=column 
int fact=1;
for (int i = 1; i <=f; i++)
{
 fact=fact*i;
 }
 return fact;
}
int combination(int x,int y){
int nCr= factorial(x)/(factorial(y)*factorial(x-y));
return nCr;
}
int main(){
    int n;
    printf("Enter an Number:");
    scanf("%d",&n);
    for (int i = 0; i <=n ; i++) // i=0 because we are printing 1 more row or coulmn j as required in pascal trangle.
    {
       for (int j = 0; j <= i; j++)
       {
       int iCr=combination(i,j);
        // iCr i=row j = column iCr=n!/(r!(n-r)!)
       printf("%d ",iCr);
       }
       printf("\n");
    }
    
    return 0;
}