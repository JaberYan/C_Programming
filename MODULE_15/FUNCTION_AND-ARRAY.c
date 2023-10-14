#include<stdio.h>
void fun(int *ar,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
        
    }
    printf("\n");
}
void fun2(double *ar,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%0.2lf  ",ar[i]);
        
    }
       
}
int main()
{
    double ar2[5]={10.20,20.12,30.31,40.45,50.54};
    fun2(ar2,5);
    int ar[5]={10,20,30,40,50};
    fun(ar,5);
    return 0;
}