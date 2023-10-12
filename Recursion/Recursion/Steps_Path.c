
#include<stdio.h>
int step(int n){
// if(n==3) return 3;
// if(n==2) return 2;
// if(n==1) return 1; or this ->
if(n==3 || n==2 || n==1){
    return n;
}
int recstep=step(n-1)+step(n-2)+step(n-3);
return recstep;
}
int main(){
int n;
printf("Enter No. Of Steps:");
scanf("%d",&n);
printf("steps input is -> %d and uniques steps are->%d",n,step(n));
return 0;
}