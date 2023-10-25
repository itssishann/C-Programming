#include <stdio.h>
//queston -> calculate product of array..
int main(void)
{
    int n;
    printf("enter the no. of elements:");
    scanf("%d", &n);
    int aproduct=1 ;// using this in loop to calculate product..
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
        aproduct *= arr[i];
    }
printf("PRODUCT OF ARRAY IS -> %d",aproduct);
    return 0;
}