#include <stdio.h>

int main() {
    int n,arm=0,r=0;
    printf("enter the number:");
    scanf("%d",&n);
    int c=n;
   while(n>=0){
r=n%10;
arm=r*r*r+arm;
n=n/10;
   }
if(c==arm){
    printf("GIVEN NUMBER IS ARMSTRONG");
}

    return 0;
    }
   