#include <stdio.h>
void inc_dec(int n)
{
    int print = n;
    if (n == 0)
    {
        return /*return1*/;
    }

    printf("->%d<-\n", n);

    // line 4
    // inc_dec(--n);   Using post-decrement (n--) if n=5 to pass the current value of n to the function so n==0 will never work because n is always remains 5 so we will use (--n) or (n-1);
    inc_dec(n - 1);

    // then n will become 5-1=4 4-1 =3 and so on till 0;
    if (n == 1)
    {
        printf("\n\nIncreasing Order\n");
    }
    // this print is used for increase no. and line 4 print is for decrease no.
    printf("->%d<-\n", n);
    return /*return2*/; // this return has no usecase overall for now because n==0 return is used if we use this return2 then n==0 return1 will go back to this return2 and go back to function.. ie calling back function ..
}

int main()
{
    int n;
    printf("Enter an Number");
    scanf("%d", &n);
    printf("\nDecreasing Order\n");
    inc_dec(n);

    return 0;
}