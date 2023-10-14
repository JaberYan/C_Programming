#include<stdio.h>
char small_to_capital(char a) //a=a
{
    
    char f=a-32;
    return f;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    char i=small_to_capital(ch);
    printf("%c",i);
    return 0;
}