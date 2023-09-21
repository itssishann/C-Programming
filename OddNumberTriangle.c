#include <stdio.h>

int main() {
    int n;
    printf("ENTER THE NUMBER\n"); //no. of rows to print
    scanf("%d",&n);
    for (int i=1;i<=n ;i++ ) { // this one is for  row => ----
        for(int j=1;j<=i;j++){ // this one is for column i.e =>  ||
            printf("%d",(j*2)-1,j); 
            
        }
        printf("\n");
    }
    return 0;
}
