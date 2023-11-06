#include<stdio.h>

int main(){
    //first matrix input
int m,n;
printf("Enter the number of rows in the 1st matrix: ");
scanf("%d",&m);
printf("Enter the number of columns in the 1st matrix: ");
scanf("%d",&n);
int a[m][n];
for (int i = 0; i < m; i++)
{  
    printf("Enter Elements in %d Row: ",i+1);
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
//second matrix input
int p,q;
printf("Enter the number of rows in the 2nd matrix: ");
scanf("%d",&p);
printf("Enter the number of columns in the 2nd matrix: ");
scanf("%d",&q);
   
int b[p][q];
for (int i = 0; i < p; i++)
{  
    printf("Enter Elements in %d Row: ",i+1);
    for (int j = 0; j < q; j++)
    {
        scanf("%d",&b[i][j]);
    }
}
if(n!=p){
   printf("\nMatrix Multiplication Not Possible: %d != %d\n", n, p);
}
else{
    int res[m][q];
    int cr=n;
    // matrix multiple here..
    for (int i = 0; i < m; i++)
    {
        // i row of [][] and j column Of b [][]
        // a[i][0],a[i][1],a[i],[2]*b[0][j],b[1][j]..
        for (int  j = 0; j < q; j++)
        {
            res[i][j]=0;
            for (int k = 0; k < cr; k++)
            {
                res[i][j] += a[i][k]*b[k][j];  // a is  first array b is second array
            }
        }
        
    }
    

//printing first array 
printf("First Matrix ->\n");
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n ; j++)
   {
    printf("%d ",a[i][j]);
   }
   printf("\n");
}
// second matrix print
printf("Second Matrix ->\n");
for (int i = 0; i < p; i++)
{
   for (int j = 0; j < q ; j++)
   {
    printf("%d ",b[i][j]);
   }
   printf("\n");
}
// printing "res" multiplication array
printf("Multiplication Matrix ->\n");
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < q ; j++)
   {
    printf("%d ",res[i][j]);
   }
   printf("\n");
}
}
 return 0;
}
// output >> First Matrix ->
// 1 2
// 1 2
// 1 2
// 1 2
// Second Matrix ->
// 1 2 2 1
// 2 1 2 1
// Multiplication Matrix ->
// 5 4 6 3
// 5 4 6 3
// 5 4 6 3
// 5 4 6 3