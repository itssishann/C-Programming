#include<stdio.h>
int main(){
    /*
    OUTPUT>>
    ENTER THE NUMBER:5
----Star Pyramind----
    *
   ***
  *****
 *******
*********
    */
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("----Star Pyramind----\n");
    int nsp = n-1; // for spaces no of spaces
    int nst =1; // for starts no of stars
    for(int i=1; i<=n;i++){
        for (int k = 1; k <=nsp; k++) // for spaces1
        {
            printf(" ");
        }
        nsp=nsp-1;
        for(int j=1;j<=nst;j++){
            printf("*");
            }
            nst=nst+2;
    printf("\n");
    }
return 0;
}
