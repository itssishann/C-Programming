#include <stdio.h>

int main() {
    int n;
    printf("ENTER THE NUMBER\n"); //no. of rows to print
    scanf("%d",&n);
    for (int i=1;i<=n ;i++ ) { 
        for(int j=1;j<=i;j++){
            printf("%d",(j*2)-1,j); 
            
        }
        printf("\n");
    }
    return 0;
}
