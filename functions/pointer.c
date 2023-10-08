#include <stdio.h>

int main() {
    int a = 12;
    int* x = &a; // stores the address of a in int* x variable i.e pointer
printf("%p\n",x); // a address
printf("%p \n",&x); // x address
*x=45;
printf(" your a address is :%p\n",&a);
printf("%d",*x);

    return 0;
}
