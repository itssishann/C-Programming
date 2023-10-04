#include<stdio.h>
int main(){
    /*
    OUTPUT>>
    ENTER THE NUMBER:5
----Number Pyramind With Reverse Number----
    1
   121
  12321
 1234321
123454321
         */
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("----Number Pyramind With Reverse Number----\n");
    int nsp = n-1; // for spaces no of spaces
   for (int  i = 1; i <=n; i++){ //row loop..
   int a=i-1; // for pattern printing revrse 1, 21,321..
for(int s=1; s<=nsp;s++){ //space loop
    printf(" "); //blank space
}
nsp=nsp-1;// decrease space everytime by one
   for(int j=1;j<=i;j++){ //column loop
   printf("%d",j);
   }
   for(int r=1;r<=i-1;r++){ //reversal pattern
    printf("%d",a);
    a=a-1;// decrement a by1 because we want reverse number pattern like 21,321..
   }
  
   printf("\n"); //new line after each row..
   }
   
   return 0;
}
