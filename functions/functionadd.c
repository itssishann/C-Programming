#include<stdio.h>
int add(int x,int y){
return x+y;
}

int main(){
    int a,b;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    int sum=add(a,b); // add will allot this values to int x,int y such that int x=a,int y=b & return the add value to sum 
    printf("Sum Is:%d",sum);
    return 0;
}