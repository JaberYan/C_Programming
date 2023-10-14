#include<stdio.h>
#include<string.h>
void fun(char *ar) //ar="Hello"
{
    *ar="World";
    int sz=strlen(ar);
    for (int i = 0; i < sz; i++)
    {
        printf("%c",ar[i]);
    }
    
}
int main()
{
    char ar[20]="Hello";
    fun(ar);
    return 0;
}