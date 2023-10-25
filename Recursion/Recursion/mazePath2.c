#include <stdio.h>
int mazePath(int n,int m){ //using 2 variable only
int rightways=0;
int downways=0;
  if(n==1 && m==1) return 1;
  if(n==1) { //can not go down from here
    rightways+= mazePath(n,m-1);
  }
  if(m==1){
    downways+= mazePath(n-1,m);
  }
  if(n>1 && m>1){
    rightways+= mazePath(n,m-1);
    downways +=mazePath(n-1,m);
  }
  int totalways =rightways+downways;
  return totalways;
}
int main(){
  int n,m;
  printf("enter no. of rows");
  scanf("%d",&n);
  printf("enter no. of column");
  scanf("%d",&m);
  int TotalSteps = mazePath(n,m);
  printf("Total Ways = %d",TotalSteps);
  return 0;
  
}
