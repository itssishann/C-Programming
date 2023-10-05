// Online C compiler to run C program online
#include <stdio.h>
int factorial(int x){ //factorial function
    int fact=1;
    for (int i =x ; i >=1; i--)
    {
        if(i==1){
            printf("%d=",i);
        }
        else{
            printf("%dx",i);
        }
        fact=fact*i;
    }
   return fact;
    }

int main() {
  int n,fact=1;
  printf("enter an number:");
  scanf("%d",&n);
for (int i = 1; i <=n; i++){
    if(i==1){
    printf("%d  ",i);
    printf("\n");
    }
    else{
    printf("%d\n",factorial(i));
    }
   
}
    return 0;
}