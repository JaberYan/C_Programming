#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int a[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int flage=1;
    if (row!=colum)
    {
        flage=0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (i+j==row-1)
            {
                if (a[i][j]!=1)
                {
                    flage=0;
                }
            }
            else if (a[i][j]!=0)
            {
                flage=0;
            }
            
        }
        
    }
    if (flage==1)
    {
        printf("secondary unit matrix");
    }
    else
    {
        printf("not secondary unit matrix");
    }
    return 0;
}