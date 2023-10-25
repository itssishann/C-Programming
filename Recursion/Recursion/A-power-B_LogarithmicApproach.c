#include <stdio.h>
int powerlog(int a,int b){
  if(b==0) return 1;
  int fastcall = powerlog(a, b/2);
  if(b%2==0) return fastcall * fastcall; // for even power
  else return fastcall * fastcall * a ;// for odd power
}
int main() {
  int a,b;
  printf("Enter a Base:");
  scanf("%d",&a);
  printf("Enter a Power:");
  scanf("%d",&b);
int result=  powerlog(a,b);
  printf("%d raised to power %d is -> %d",a,b,result);
  return 0;
  
