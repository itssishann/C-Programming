#include <stdio.h>
// question -> Write a C program that takes student marks, classifies them as 'Pass' or 'Failed' (marks less than 35 are fail), and displays the roll numbers and marks of both groups."
int main(void)
{
    int n; // input number variable
    printf("enter the no. of elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) //taking input in array
    {
        printf("enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) //for calculating marks
    {
        if (arr[i] < 35) // less than 35 are fail
        {
            printf("Failed Student Roll no is %d marks ->%d\n", i + 1, arr[i]);
        }
        else if (arr[i] > 34 && arr[i] <= 100) // marks between 35 to 100 are pass..
        {
            printf("Pass Student Roll No is %d marks -> %d\n", i + 1, arr[i]);
        }
        else if (arr[i] > 100) // greater then 100 marks are invalid..
        {
            printf("Invalid Marks in roll no. '%d' marks -> **%d**\n", i + 1, arr[i]);
        }
    }
    return 0;
}