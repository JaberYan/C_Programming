#include<stdio.h>
int main()
{
    int N;
    scanf("%d\n",&N);
    int S[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ",&S[i]);
    }
    int even=0,odd=0;
    for (int i = 0; i < N; i++)
    {
        if (S[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("%d %d",even,odd);
    return 0;
}