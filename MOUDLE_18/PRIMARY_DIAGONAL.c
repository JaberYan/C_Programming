#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flage=1;
    if (row!=col)
    {
        flage=0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                continue;
            }
            
            if (a[i][j]!=0)
            {
                flage=0;
            }
            
        }
        
    }
    if (flage==1)
    {
        printf("primary diagonal");
    }
    else
    {
        printf("not primary diagonal");
    }
    return 0;
}