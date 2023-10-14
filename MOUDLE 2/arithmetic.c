#include<stdio.h>
int main()
{
    int a=3,b=20,sum,mns,mlt;
    int mod=b%a;
    // float dvd=b*1.0/a;
    // sum=a+b;
    // printf("%d + %d=%d",a,b,sum);

    // mns=a-b;
    // printf("%d - %d=%d",a,b,sum);

    // mlt=a*b;
    // printf("%d * %d=%d",a,b,a*b);

    // printf("%d / %d=%f",b,a,dvd);
    printf("%d %% %d=%d",b,a,mod);
    return 0;
}