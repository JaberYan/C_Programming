#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (97<=X && 122>=X)
    {
        //chuto hater
        int ans=X-32;
        printf("%c",ans);
    }
    else if (65<=X && 90>=X)
    {
        //boro hater
        int answ=X+32;
        printf("%c",answ);
    }
    
    
    return 0;
}