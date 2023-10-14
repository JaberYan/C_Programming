#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%s",a[i]);
        printf("%s",a[i]);
    }
    return 0;
}