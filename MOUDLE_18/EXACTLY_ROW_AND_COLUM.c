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
    // exact row;
    // int er;
    // scanf("%d",&er);
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ",a[er][i]);
    // }


    //exact colum;
    int ec;
    scanf("%d",&ec);
    for (int i = 0; i < row; i++)
    {
        printf("%d",a[i][ec]);
        printf("\n");
    }
    
    return 0;
}