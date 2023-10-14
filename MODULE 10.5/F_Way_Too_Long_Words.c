#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[101];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s\n",a);
        
        int lenght=strlen(a);
        if (lenght<10)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("%c",a[0]);
            printf("%d",lenght-2);
            printf("%c",a[lenght-1]);
            printf("\n");
        }
    }
    
    
    return 0;
}