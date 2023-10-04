#include <stdio.h>

int main(void) {
  int a,b,c,d;
  printf("ENTER FOUR NUMBERS ");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a>b && a>c && a>d){
    printf("A IS GREATEST number");
  }
  else if(b>a && b>c && b>d){
    printf("B is greatest number");
  }
  else if(c>a && c>b && c>d){
    printf("C is greatest number");
  }
  else{
    printf("D is greatest number");
  }
  return 0;
}