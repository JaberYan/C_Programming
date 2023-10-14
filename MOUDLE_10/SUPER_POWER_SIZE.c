#include<stdio.h>
int main()
{
    char a[6]={'R','i','y','a','n'};//no gurantee 
    char a[6]="Riyan";//gurantee
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s",a);
    return 0;
}