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
            if (i==j)
            {
                if (a[i][j]!=a[0][0])
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
        printf(" primary unit matrix");
    }
    else
    {
        printf("not primary unit matrix");
    }
    return 0;
}