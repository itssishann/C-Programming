#include <stdio.h>
// factorial calculator
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    printf("\t\t\t\t----Combinations Calculator (nCr)----\n");
    int n, r, nr; // input formula= ncr = n!/ r!*(n-r)!
    printf("enter number n:");
    scanf("%d", &n);
    printf("enter number r:");
    scanf("%d", &r);

    // time to use function factorial creation.
    int nfact = factorial(n); // n!
    // factorial(n)  sending the value of n to fucntion in integer x and function named factorial will send the factorial
    int rfact = factorial(r);      // r!
    int nrfact = factorial(n - r); // factorial  (n-r) == nrfact!
    int nCr = nfact / (nrfact * rfact);
    printf("==%d", nCr);
    return 0;
}