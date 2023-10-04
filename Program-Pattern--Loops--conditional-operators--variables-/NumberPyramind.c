#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("Number Pyramind\n");
    int nsp = n-1; // for spaces no of spaces
    int nst =1; // for starts no of stars
    for(int i=1; i<=n;i++){
        for (int k = 1; k <=nsp; k++) // for spaces1
        {
            printf(" ");
        }
        nsp=nsp-1; // space decrease by one every time wehn loops run again
        for(int j=1;j<=nst;j++){
            printf("%d",j); // for printing numbers 1'123'12345' in case when diffence is 2;
            }
            nst=nst+2; // numbers increase by 2 everytime when loop run again.
    printf("\n");
    }
}
