#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("two side same\n");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("left side small\n");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("right side small");
            break;
        }
        

        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]>b[i])
        {
            printf("right side small");
            break;
        }
        else
        {
            printf("left side small");
            break;
        }
        
    }
    
    return 0;
}