#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    scanf("%s\n",a);
    scanf("%s",b);
    int st=strlen(a);
    int st2=strlen(b);
    printf("%d %d\n",st,st2);
    printf("%s %s",a,b);
    return 0;
}