#include<stdio.h>
void sum(int n ,int calculate_sum){
    if(n==0){
        printf("%d\n",calculate_sum);
        return;
    }
    sum(n-1,calculate_sum+n);
}
int main(){
    int n;
    printf("Enter an Number:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}