#include<stdio.h>
int main()
{
    int N;
    scanf("%d\n",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d \n",&A[i]);
    }
    int X;
    scanf("%d\n",&X);
    int M=0;
    for (int i = 0; i < N; i++)
    {
        if (A[i]==X)
        {
            M++;
        }
        
    }
    printf("%d",M);
    return 0;
}