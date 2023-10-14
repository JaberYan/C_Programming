#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    char a2[1001];
    strcpy(a2,a);
    strrev(a);
    if (strcmp(a2,a)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}