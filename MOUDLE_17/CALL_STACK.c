#include<stdio.h>
void hello()
{
    printf("hello start\n");
    world();
    printf("hello end\n");
}
void world()
{
    printf("world start\n");
    printf("world end\n");
}
int main()
{
    printf("main start\n");
    hello();
    printf("main end\n");
    return 0;
}