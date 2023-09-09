#include<stdio.h>
int main(){
    int n;
    printf("TABLE GENERATOR \n"); /*error here if you dont give space after \n then you will get an error
    to solve just give psace i.e
    error == printf("TABLE GENERATOR \n")
    solution == printf("TABLE GENERATOR \n ") this might be because of vs code version working on other compiler perfectly*/
    printf("Enter The Number:");
   scanf("%d",&n);
   for(int i=n;i<=n*10;i=i+n){
       printf("%d \n",i);
   }
}