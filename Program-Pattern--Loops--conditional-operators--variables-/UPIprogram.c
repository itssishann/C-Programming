#include <stdio.h>
int main()
{
    int upipin = 2010; // pin is 2010

    int balance = 5000;
    int enteredpin;    // for input pin
    float transaction; // for transaction to done after pin is correct
    printf("\t\t-------------C-PAY-------------- \n");
    printf("Enter Your UPI Pin:");
    scanf("%d", &enteredpin);
    if (enteredpin == upipin)
    {
        printf("Enter The Amount To Send:");
        scanf("%f", &transaction);
        if (transaction <= balance)
        {
            float rbalance = balance - transaction; // for remianing balance to show to user!
            printf("Transaction Suceess!\n");
            printf("Main Balance:%f", rbalance);
        }
        else
        {
            printf("LOW Balance (Transaction Failed!).");
        }
    }

    else
    {
        printf("Entered Pin is Wrong Try Again!");
    }

    return 0;
}