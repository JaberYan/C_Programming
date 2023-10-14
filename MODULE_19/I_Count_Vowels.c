#include<stdio.h>
int fun(char arr[],int i)
{
    // bace case;
    if(arr[i]=='\0')
    {
        return 0;
    }
    int x=fun(arr,i+1);
    if (arr[i]>='A' && arr[i]<='Z')
    {
        arr[i]=arr[i]+32;
    }
    if (arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
    {
        return x+1;
    }
    else
    {
        return x;
    }
}
int main()
{
    char arr[201];
    fgets(arr,201,stdin);
    int cnt=fun(arr,0);
    printf("%d",cnt);
    return 0;
}