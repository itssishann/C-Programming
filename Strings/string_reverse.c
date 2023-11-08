#include <stdio.h>
#include <string.h>
int main()
{
    char str[50]; // 50 max charcaters
    puts("Reverse The String."); //puts give new line \n
    printf("Enter your Name:");
    scanf("%[^\n]s", str); //[^\n] using this we can take multiple words
    printf("Orignal String-> %s\n",str);
    // now reversng the string
    // find size of string then use for loop to reverse
    int size = 0;
    int c = 0;
    while (str[c] != '\0')
    {
        size++;
        c++;
    }
    // size of string recived
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Hello -> %s", str);
    return 0;
}
// output >> Reverse The String.
// Enter your Name:Money Heist Web Series
// Orignal String-> Money Heist Web Series
// Hello -> seireS beW tsieH yenoM