#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,14,stdin);//(array name,koto number porjonto print hobe,stdin)
    a[12]='\0';
    // gets(a);
    printf("%s",a);
    return 0;
}