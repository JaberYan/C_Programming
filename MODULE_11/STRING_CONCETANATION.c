#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[500];
    scanf("%s %s",a,b);
    int k=strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[k]=b[i];
        k++;
    }
    printf("%s\n",a);
    return 0;
}