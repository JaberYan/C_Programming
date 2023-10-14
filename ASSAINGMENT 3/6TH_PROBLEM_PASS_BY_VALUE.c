#include<stdio.h>

// PASS BY VALUE;
// Declare a variable in the main function and copy its value in the form of a parameter in the fun function is called pass by value. Here the variable of the main function and the variable address of the fun function are completely different.  So changing the value of the variable in the fun function will not affect the value of the variable of the main function. Again if the variable value is changed in the main function then the variable value of the main function will change.

void fun(int x)
{
    x=60;
    printf("the address of variable in fun function-%p\n",&x);
}
int main()
{
    int x=20;
    printf("the address of variable in main function-%p\n",&x);
    fun(x);
    printf("update variable value in fun function-%d\n",x); //but same of the value in main function;
    x=30;
    printf("update variable value in main function-%d",x);
    return 0;
}