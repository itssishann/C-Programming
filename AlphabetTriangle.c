#include <stdio.h>
/* OUTPUT >> 
ALPHABET SQUARE
ENTER THE NUMBER:5
A
AB
ABC
ABCD
ABCDE
*/
int main() {
    int n;
    printf("ALPHABET SQUARE\n");
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("\n");
  for(int i=1; i<=n; i++){
  int a=1;
      for(int j=1;j<=i;j++){ // it will help to make a triangle if j=1 A j=2 AB and so on..
      int c = a + 64; // ascii converter we know that A  is 65 value in ascii ,, so we have made a conveter as c such that if we type one it will be used as A and 2 USed as B.. and so on.....
     char ch=(char)c; //using a type casting concept here..
  printf("%c",ch);
  a++; // increment a so it will run like 1=A 2=B and so on for refrence line 10 comment
}
printf("\n");
  }
    return 0;
}
