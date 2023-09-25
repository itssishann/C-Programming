#include<stdio.h>
/*
OUTPUT >>
Enter an Number:5
--ALPHABET PYRAMIND WITH REVERSE ALPHABET--
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
int main(){
    int n;
    printf("Enter an Number:");
    scanf("%d",&n);
    printf("--ALPHABET PYRAMIND WITH REVERSE ALPHABET--\n");
    int nsp=n-1;//for no. of spaces
    for(int i=1;i<=n;i++){
        for (int s = 1; s<=nsp; s++)
        {
            printf(" ");
        }
        nsp=nsp-1;// nsp decrease by1 of decrement..
for (int j =1; j <=i; j++)
{
   int charc=j+64;
   char ch=(char)charc;
   printf("%c",ch);
}
int a=i-1; // for revrsal number
for (int r = 1; r<=i-1; r++) //reversal loop
{
      int charcr=a+64;
   char chreverse=(char)charcr;
   printf("%c",chreverse);//print reverse alphabet.
    a=a-1;
}

printf("\n");
        
    }
    return 0;
}
