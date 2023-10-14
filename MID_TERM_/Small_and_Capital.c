#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    scanf("%s",S);
    int cap=0,smal=0;
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i]>='a' && S[i]<='z')
        {
            smal++;
        }
        if (S[i]>='A' && S[i]<='Z')
        {
            cap++;
        }
        
    }
    printf("%d %d",cap,smal);
    return 0;
}