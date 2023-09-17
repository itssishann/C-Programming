#include <stdio.h>

int main() {
    int n,a=1,b=1,sum=1; // we can use sum as 0 also but in 1st and 2nd fibonaci it will show zero so tats why we using it as 1 
    printf("FIBBONACI NUMBER \n ");
    printf("Enter The Number:");
    scanf("%d",&n);
for (int i = 1; i <=n-2; i++)
{
  sum=a+b;
  a=b;
  b=sum;
}

   printf("Fibonaci of %d Term is %d",n,sum);
    return 0;
    
}