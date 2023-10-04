#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER NO. OF ROWS:");
    scanf("%d",&r);
    printf("\n");
    printf("ENTER NO OF COLUMNS");
    scanf("%d",&c);
    for(int i=0;i<=r;i++){
        for(int i=0;i<=c;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}