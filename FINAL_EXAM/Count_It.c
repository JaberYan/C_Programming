#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    fgets(a,1001,stdin);
    int Capital=0,Small=0,Space=0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]>='A' && 'Z'>=a[i])
        {
            Capital++;
        }
        if (a[i]>='a' && 'z'>=a[i])
        {
            Small++;
        }
        if (a[i]==' ')
        {
            Space++;
        }
        
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",Capital,Small,Space);
    return 0;
}