#include<stdio.h>
#include<string.h>
int main()
{
    char st[100001];
    gets(st);
    int lenght=strlen(st);
    for (int i = 0; i < lenght; i++)
    {
        if (st[i]==',')
        {
            st[i]=' ';
        }
        else if (st[i]>=97)
        {
            st[i]=st[i]-32;
        }
        else if (st[i]>=65)
        {
            st[i]=st[i]+32;
        }    
    }
    printf("%s",st);
    
    return 0;
}