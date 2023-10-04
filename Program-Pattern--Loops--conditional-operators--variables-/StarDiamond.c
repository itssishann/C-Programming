#include<stdio.h>
/*
OUTPUT>>
Enter an Number:7
Star Diamond
   *
  ***
 *****
*******
 *****
  ***
   *
*/
int main(){
    int n; //input 
    printf("Enter an Number:");
    scanf("%d",&n);
    printf("--Star Diamond--\n");
    int nst=1; // no of star =1
    int nsp= n/2; //no of spaces of n/2 if n=7 then nsp =3
    int ml=(n/2)+1; // middle line finder of diamond
if (n%2==0)
{
    printf("Invalid Input Enter Odd Number.");
}
else{

 for (int i = 1; i <= n; i++) // star row loop
 {
    for(int s=1;s<=nsp;s++){// spaces loop
printf(" ");
    }
    for(int j=1;j<=nst;j++){ //star column loop
        printf("*");
    }
 printf("\n");//row break here
 if (i<ml) //upper diamon
 {
    nst+=2;
    nsp--;
 }
 else{ //lower diamond
    nst-=2;
    nsp++;
 }
 
 }
 
}
    return 0;
}
