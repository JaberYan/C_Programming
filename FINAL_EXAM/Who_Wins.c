#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tiger,phatan;
    int Tiger=0,Phatan=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&tiger,&phatan);
        if (tiger>phatan)
        {
            Tiger++;
        }
        else if (tiger<phatan)
        {
            Phatan++;
        }
        
    }
    if (Tiger>Phatan)
    {
        printf("Tiger");
    }
    else if (Tiger==Phatan)
    {
        printf("Draw");
    }
    else
    {
        printf("Pathan");
    }
    return 0;
}