#include<stdio.h>
int fun(char arr[],int i)
{
    if(arr[i]=='\0') return 0;
    int l=fun(arr,i+1);
    return l+1;
}
int main()
{
    char arr[6]="hello";
    int lenght=fun(arr,0);
    printf("%d\n",lenght);
    return 0;
}