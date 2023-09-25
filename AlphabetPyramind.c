#include<stdio.h>
int main(){
    /*
    OUTPUT>>
   ENTER THE NUMBER:7
----Alphabet Pyramind----
      A
     ABC
    ABCDE
   ABCDEFG
  ABCDEFGHI
 ABCDEFGHIJK
ABCDEFGHIJKLM
    */
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("----Alphabet Pyramind----\n");
    int nsp = n-1; // for spaces no of spaces
    int nsc =1; // for characer no of chars
   for (int  i = 1; i <=n; i++){ //row loop..
for(int s=1; s<=nsp;s++){ //space loop
    printf(" "); //blank space
}
nsp=nsp-1;// decrease space everytime by one
   for(int j=1;j<=nsc;j++){ //column loop
int charc=j+64; // ascii converter int to char..
char chpattern=(char)charc; // tyoecasting concept
printf("%c",chpattern); //char printing here.
   }
   nsc=nsc+2;// increase character by 2 everytime when new row created..
   printf("\n"); //new line after each row..
   }
   
   return 0;
}
