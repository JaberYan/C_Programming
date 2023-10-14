#include<stdio.h>
//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for (int i = 1; i <= (n*2)-1; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d",j);
        }
        if (i<n)
        {
            s--;
            k+=2;
        }
        else
        {
            s++;
            k-=2;
        }
        printf("\n");
    }
    
    return 0;
}