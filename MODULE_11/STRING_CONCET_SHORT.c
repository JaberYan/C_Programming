#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[500];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s\n",a);
    return 0;
}