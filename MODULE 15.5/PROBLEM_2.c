#include<stdio.h>
#include<string.h>
int my_len(char *ar)
{
    int lenght=0;
    while(*ar!='\0')
    {
        lenght++;
        ar++;
    }
    return lenght;
}
int main()
{
    char ar[100];
    scanf("%s",&ar);
    int j=my_len(ar);
    printf("%d",j);
    return 0;
}