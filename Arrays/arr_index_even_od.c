// question -> add 10 to the even elements by 2 and multiply the odd indexed elements by 2.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter No. Of Elements In Array:");
    scanf("%d",&n);
  int arr[n];
  for (int d = 0; d < n; d++) // array input
  {
  printf("Enter Data In %d Element:",d+1);
  scanf("%d",&arr[d]);
  }
  printf("\n Array Generated Is:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d, ",arr[i]);
  }
  
  
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }
    printf("\nModified Array According To Question Is -> \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}