// #include<stdio.h>
// int main()
// {
//     int x=10;
//     printf("%p\n",&x);
//     int * p=&x;
//     printf("%p\n",p);
//     // dereference;
//     printf("%d\n",*p);

//     *p=500;

//     printf("%d\n",x);
//     return 0;
// }
 #include <stdio.h>
    int sum(int x, int y)
    {
    	int res = x+y;
        return res;
    }
    int main()
    {
        int j=sum(5,6);
        printf("%d",j);
    }