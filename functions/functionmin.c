#include<stdio.h>

int min(int a, int b){
    if(a<b){
      return a;
    }
    else if(b<a){
        return b;
    }
  
    
}
int main(){
    int a,b;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
   int minimum= min(a,b);
   printf("%d",minimum);
    return 0;
}