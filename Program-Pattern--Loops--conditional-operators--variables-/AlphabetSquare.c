#include <stdio.h>
/* OUTPUT >> ALPHABET SQUARE
ENTER THE NUMBER:4
ABCD
ABCD
ABCD
ABCD
*/
int main() {
    int n;
    printf("ALPHABET SQUARE\n"); //4X4 5X5 AND SO ON..
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("\n");
  for(int i=1; i<=n; i++){
  int a=1;
      for(int j=1;j<=n;j++){
      int c = a + 64; // ascii converter we know that A  is 65 value in ascii ,, so we have made a conveter as c such that if we type one it will be used as A and 2 USed as B.. and so on.....
     char ch=(char)c; //using a type casting concept here..
  printf("%c",ch);
  a++; // increment a so it will run like 1=A 2=B and so on for refrence line 10 comment
}
printf("\n");
  }
    return 0;
}
