#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=10000)
    {
        printf("she buy a gucci bag\n");
        if (tk>20000)
        {
            printf("she buy gucci belt\n");
        }
        
    }
    else if (tk>=5000)
    {
        printf("she buy a levis bag\n");
    }
    else
    {
        printf("she buy something to new market");
    }
    return 0;
}