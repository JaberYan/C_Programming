#include<stdio.h>
#include<string.h>
int main()
{
    char X[100],Y[100];
    scanf("%s\n%s",X,Y);
    int val=strcmp(X,Y);
    printf("%d",val);
    return 0;
}