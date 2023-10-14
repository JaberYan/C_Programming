#include<stdio.h>
//     1
//    22
//   333
//  4444
// 55555
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d",i);
        }
        s--;
        k++;
        printf("\n");
    }
    
    return 0;
}