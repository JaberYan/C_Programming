#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (X>=48 && X<=57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (X>=97 && X<=122)
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
        
    }
    
    return 0;
}