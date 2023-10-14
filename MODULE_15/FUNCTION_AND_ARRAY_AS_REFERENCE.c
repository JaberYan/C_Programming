#include<stdio.h>
#include<string.h>
void fun(char * ar) //"Hello"
{
    ar[3]='o';
    printf("\n");
}
void fun2(int *ar)
{

}
int main()
{
    char ar[5]="Hello";
    for (int i = 0; i < 5; i++)
    {
        printf("%c",ar[i]);
    }
    fun(ar);
    for (int i = 0; i < 5; i++)
    {
        printf("%c",ar[i]);
    }
    char ar2[]
    return 0;
}