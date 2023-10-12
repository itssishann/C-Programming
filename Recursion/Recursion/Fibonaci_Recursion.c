#include <stdio.h>
int fibo(int n)
{
    //base case for fibonaci series..
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    //recursive calculation of Fibonacci
    int fibonaci = fibo(n - 1) + fibo(n - 2);
    return fibonaci;
}
int main()
{
    //recursion for  the Fibonacci of nth term 
    int n;
    printf("Enter an Number:");
    scanf("%d", &n); 
    //Fibonacci of nth term 
    printf("Fibonaci Of %d term is -> %d \n", n, fibo(n));

    return 0;
}