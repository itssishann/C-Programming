#include<stdio.h>
int main(){
    int r;
    printf("ENTER NO. OF ROWS:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int i=1;i<=r;i++){
            printf("* ");
        }
        printf("\n ");
    }
    return 0;
}