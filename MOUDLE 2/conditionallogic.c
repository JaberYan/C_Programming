#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=100)
    {
        printf("ami burger khabo");
    }
    else if ((tk>=50))
    {
        printf("ami fuska khabo");
    }
    else if(tk>=20)
    {
        printf("ami ice cream khabo");
    }
    else
    {
        printf("ami kicui khabo na");
    }
    
    return 0;
}