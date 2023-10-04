#include<stdio.h>
int main()
{
    /*
    output >> if inout =3
 *   * * *
 *   *    
 * * * * *
     *   *
 * * *   *
    */
 int i,j,no;
 
 printf("Enter the number:");
 scanf("%d",&no);

 for(i=1;i<=no*2-1;i++)
 {
  for(j=1;j<=no*2-1;j++)
  {

 if(i==no||j==no||i==1&&j>no||i<no&&j==1||i>no&&j==no*2-1||i==no*2-1&&j<no)
   {
  printf(" *");
   }
   else
   {
  printf("  ");
   }
  }
  printf("\n");
 } 
}  
