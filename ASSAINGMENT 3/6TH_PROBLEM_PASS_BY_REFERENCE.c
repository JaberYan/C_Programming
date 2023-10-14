#include<stdio.h>

//PASS BY REFERENCE;
// If a variable is declared in the main function, its memory address is taken as a parameter in the fun function,It is called pass by reference. Here the variable address of the main function and the address of p of the fun function are the same. So if the value of p is dereference in the fun function, the main function  The value of the variable will change

void fun(int *p)
{
    *p=100;
    printf("the value of p in fun function-%p\n",p);
}
int main()
{
    int x=30;
    printf("the address of x in main function-%p\n",&x);
    printf("before updating the value of the vaiable-%d\n",x);
    fun(&x);
    printf("after updating the value of the variable-%d\n",x);
    return 0;
}