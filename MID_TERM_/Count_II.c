#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int vowelcnt=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vowelcnt++;   
        }
        
    }
    printf("%d",vowelcnt);
    return 0;
}