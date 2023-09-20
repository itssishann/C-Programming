#include<stdio.h>
int main(){
    int n;
printf("NUMBER TRIANGLE INVERTED\n ");
printf("ENTER THE NO.OF ROWS:");
scanf("%d",&n);
for (int i = 1; i<=n; i++)
{
    for (int j= 1; j<=n+1-i; j++)
    {
       printf("%d",j);
    }
    printf("\n ");
}
return 0;
}
//  OUTPUT>>
// ENTER THE NO.OF ROWS:8
// 12345678
//  1234567
//  123456
//  12345
//  1234
//  123
//  12
//  1