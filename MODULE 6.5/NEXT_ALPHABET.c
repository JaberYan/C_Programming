#include<stdio.h>
int main()
{
    char N;
    scanf("%c",&N);
    if (N>=97 && N<=122)
    {
        N=N+1;
        printf("%c",N);
    } 
    else if (N>=65 && N<=90)
    {
        N=N+1;
        printf("%c",N);
    }
    
    
    return 0;
}