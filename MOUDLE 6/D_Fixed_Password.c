#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        //kaj
        if (n==1999)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf("wrong\n");
        }
        
    }
    
    return 0;
}