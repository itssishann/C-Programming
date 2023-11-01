#include <stdio.h>
void tower(int n,char s,char h,char d){ // char s= source h=helper d=destination..
  if(n==0) return;
  tower(n-1,s,d,h);
  printf("%c -> %c\n",s,d);
  tower(n-1,h,s,d);
  return;
}
int main() {
  int n;
    printf("**Tower Of Hanoi Solver**\n");
  printf("Enter No. Of Disc:");
  scanf("%d",&n);
  tower(n,'A','B','C'); // here A is source B is helper, C is destination
  return 0;
}
