#include <stdio.h>
int main() {
    /* OUTPUT >> STAR PLUS PATTERN 
ENTER THE NUMBER:3

 * 
***
 * 
    */
    int n;
    printf("STAR PLUS PATTERN \n");
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("\n");
  for(int i=1; i<=n; i++){
      for(int j=1;j<=n;j++){ 
      int a=(n/2)+1;
      if(j==a || i ==a){
          printf("*");
      }
      else{
          printf(" "); //empty space here
      }
}
printf("\n");
  }
    return 0;
}
