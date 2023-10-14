#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    int st=strlen(a);
    int sum=0;
    for (int i = 0; i < st; i++)
    {
        sum=sum+(a[i]-48);
    }
    printf("%d",sum);
    return 0;
}