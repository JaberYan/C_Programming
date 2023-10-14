#include<stdio.h>
#include<string.h>

int is_palindrome(char *a)
{
    int is_palindrome=1;
    for (int i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        if (a[i]!=a[j])
        {
            is_palindrome=0;
            break;
        }
    }
    return is_palindrome;
}
int main()
{
    char a[101];
    scanf("%s",a);
    int d=is_palindrome(a);
    if (d==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrom");
    }
    return 0;
}
