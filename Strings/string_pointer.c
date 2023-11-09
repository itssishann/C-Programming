#include <stdio.h>
#include <string.h>
int main()
{
  char str[]={"Hello World You Are In C Language"};
  char* ptr=str;
  int i=0;
  while (str[i] != '\0')
  {
    printf("%c",*ptr);
    ptr++;
    i++;
  }
  
    return 0;
}
