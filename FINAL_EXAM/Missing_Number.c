#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int s,a,b,c;
    int i=0;
    while (i<n)
    {
        scanf("%d %d %d %d",&s,&a,&b,&c);
        int m=a+b+c;
        int ans=s-m;
        printf("%d\n",ans);
        i++;
    }
    return 0;
}
