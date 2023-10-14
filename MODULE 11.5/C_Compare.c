#include<stdio.h>
int main()
{
    char a[20],b[20];
    scanf("%s\n%s",a,b);
    int i=1;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("%s",b);
            break;
        }
        else if (a[i]=='\0')
        {
            printf("%s",a);
            break;
        }
        else if (b[i]=='\0')
        {
            printf("%s",b);
            break;
        }
        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<b[i])
        {
            printf("%s",a);
            break;
        }
        else
        {
            printf("%s",b);
            break;
        }
    }
    
    return 0;
}