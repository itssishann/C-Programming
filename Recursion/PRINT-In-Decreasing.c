#include<stdio.h>
void greeting(int n){
    if(n==0) return ;
    printf("Good Morning %d \n",n);
greeting(n-1);

return;
}

int main(){
    int n;
    printf("Enter an Number");
scanf("%d",&n);
greeting(n);
    return 0;
}
