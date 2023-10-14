#include<stdio.h>
void print(void) 
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    print();
    return 0;
}