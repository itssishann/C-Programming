#include<stdio.h>
void england(){
    printf("You are in England.\n");
    return;
}
void bharat(){
    printf("You Are In Bharat.\n");
    england();
    return;
}
void firstfunction(){
    printf("HELLO WORLD\n");
    printf("Lets Call Multiple Functions\n");
    bharat();
    return;
}

int main(){
    firstfunction();
    return 0;
}