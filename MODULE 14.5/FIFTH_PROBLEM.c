#include<stdio.h>
char capital_to_small(char a) //a=A;
{
    char f=a+32;
    return f;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    char i=capital_to_small(ch);
    printf("%c",i);
    return 0;
}