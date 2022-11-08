#include "fun.h"

void test01()
{
    //字符串结尾'/0'
    char str[]={'a','l','t','e','r'};
    char str1[]={'a','l','t','e','r','\0'};
    char str2[8]={'a','l','t','e','r'};
    printf("%s\n",str);
    printf("%s\n",str1);
    printf("%s\n",str2);
}
void test02()
{
    char str[]="hello\0world";
    char str1[]="hello\012world";
    printf("str1:sizeof  %d\n\tstrlen   %d\n",sizeof(str1),strlen(str1));
    printf("str:sizeof  %d\n\tstrlen   %d\n",sizeof(str),strlen(str));
}
int main()
{
    test02();
    return 0;
}
