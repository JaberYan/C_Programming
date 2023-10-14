#include<stdio.h>
int main()
{
    int rowcol;
    scanf("%d\n",&rowcol);
    int arr[rowcol][rowcol];
    for (int i = 0; i < rowcol; i++)
    {
        for (int j = 0; j < rowcol; j++)
        {
            scanf("%d ",&arr[i][j]);
        } 
        printf("\n");
    }
    int primarysum=0;
    for (int i = 0; i < rowcol; i++)
    {
        for(int j=0;j<rowcol;j++)
        {
            if (i==j)
            {
                primarysum=primarysum+arr[i][j];
            }
        }
    }
    if (primarysum<0)
    {
        primarysum=primarysum*(-1);
    }
    int secondarysum=0;
    for (int i = 0; i < rowcol; i++)
    {
        for (int j = 0; j < rowcol; j++)
        {
            if (i+j==rowcol-1)
            {
                secondarysum=secondarysum+arr[i][j];
            }
        }
    }
    printf("%d",primarysum+secondarysum);
    return 0;
}