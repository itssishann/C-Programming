#include <stdio.h>
int mazePath(int cr, int cc, int er, int ec){
int rightways=0;
int downways=0;
if ((cr==er) && (cc=ec)) return 1;
if(cr==er){
  rightways+= mazePath(cr,cc+1,er,ec);
}
  if(cc == ec){
    downways+= mazePath(cr+1,cc,er,ec);
  }
  if(cr<er && cc<ec){
    rightways+= mazePath(cr,cc+1,er,ec);
    downways += mazePath(cr+1,cc,er,ec);
  }
  int totalWays =rightways +downways;
  return totalWays;
}
int main(){
  int n,m;
  printf("enter no. of rows");
  scanf("%d",&n);
  printf("enter no. of column");
  scanf("%d",&m);
  int TotalSteps = mazePath(1,1,n,m);
  printf("Total Ways = %d",TotalSteps);
  return 0;
  
}
