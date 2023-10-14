#include<stdio.h>
int main()
{
    int ar[]={1,4,5,6,7,8,9};
    for (int i = 6; i >= 0; i=i-1)
    {
        printf("ar[%d]\n",ar[i]);
    }
    
    return 0;
}