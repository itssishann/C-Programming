#include<stdio.h>
int main(){
int n; // input from user
printf("PROGRAM FOR FINDING THE DIGITS IN NUMBER \n "); // 12345 in digits = 5
printf("ENTER THE NUMBER:");
scanf("%d",&n);
int counter=0;
while (n!=0) // n when become 0 thne loop will be exit or pause
{
    n=n/10; // divide by 10 i,e example 12345 number- 12345/10 ,1234/10 ,123/10 ,12/10 ,1/10 =0 loop will pause from here 
    counter++; // counter will run every steps till it come less then 0
    
}
    printf("the number of digits are :%d ",counter);
return 0;
}