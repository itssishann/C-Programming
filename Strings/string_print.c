#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    char str[80];
    int i=0;
    printf("Enter your name:");
    scanf("%s",ch); // single word only take
    printf("CH is -> %s\n",ch);
    // scanf("%[^\n]s",&str); multiple words can take
    puts("Enter In String:"); //puts give new line i.e \n but printf not..
    gets(str);
    printf("Str is -> %s \n",str);
    return 0;
}