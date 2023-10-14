#include<stdio.h>
// return + parameter;


// return type name(parameter)
// {
//     code--
//     return what?
// }


// sum name akta robbot ace thake bola holo j tumi dui ta valuer sumation ber koro tahole thke first a bole dite hobe j kkibhabhe kaj ta korte hobe....thake tar name kore dak diye bolte hobe j bai tumi ei dui ti vlaue r sumation ber koro...tar por thake return kore dite hobe...


int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}

// tar por thake jekuno jaygay call kora jabe just tar name ta ullekh korte hobe....thke j bola hoyecilo tumi dui ta value niye sumation koro thke dui ta value dite hobe...tar por sa oi dui ta value niye sumation kore print lore dibe...

// int sum(int x,int y);
int main()
{
    // printf("%d\n",sum(20,50));
    // printf("%d\n",sum(60,30));
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));
    return 0;
}
// int sum(int x,int y)
// {
//     int sum=x+y;
//     return sum;
// }