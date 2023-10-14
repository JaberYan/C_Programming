#include<stdio.h>
int main()
{
    int n,m,k,total=0;
    scanf("%d %d %d",&n,&m,&k);
    while (n!=0)
    {                
       n++;
       m++;
       k++;
       total=n+m+k;
    }
    printf("%d",total++);
    
    return 0;
}