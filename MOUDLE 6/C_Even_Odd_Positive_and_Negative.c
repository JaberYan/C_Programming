#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int Even=0,Odd=0,Positive=0,Negetive=0;
    for (int i = 1; i <= n; i=i+1)
    {
        scanf("%d",&a);
        //kaj
        if (a%2==0)
        {
            //Even
            Even=Even+1;



            
        }
        else
        {
            //Odd
            Odd=Odd+1;
        }
        if (a>0)
        {
            //positive
            Positive=Positive+1;
        }
        else if(a<0)
        {
            //negetive
            Negetive=Negetive+1;
        }
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",Even,Odd,Positive,Negetive);
    return 0;
}