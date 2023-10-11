#include<stdio.h>
int recsum(int n){ //using return
    if(n==0){
        return 0;
    }
    int sumis=n+recsum(n-1);
    return sumis;
}
int main(){
    int n;
    printf("Enter an Number:");
    scanf("%d",&n);
    int sum=recsum(n);
    printf("%d",sum);
    return 0;
}