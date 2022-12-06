#include <iostream>
#include "test.h"

using namespace std;



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                          内联函数
 *              只是一个建议，有的编译器自己会优化为内联函数
 *        小片段，类似于宏函数，不能存在循环，不能对函数取址，过多的判断语句
 *                      作用域只在本文件
 *                      实现和定义在一起
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
inline int func(int x, int y) {
    return x + y;
}

// 默认函数,对参数设默认值
// 形参列表的某一个参数为默认参数，就免所有的参数都必须设默认值
// 声明的时候填写了默认参数，定义的时候就不能写
int test02(int a = 10,int b = 20)
{
return a+b;
}

int main03() {
    cout << test02() << endl;
    cout << test02(100) << endl;
    cout << test02(100, 200) << endl;
    cout << func(100, 10) * 20 << endl;
    return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                          引用
 *                     引用相当于常指针
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
typedef struct Teacher {
    char name[32];
    int age;
} Teacher;

void printTeacher(Teacher &t) {
    cout << t.age << endl;
    t.age = 32;
}

// 引用相当于常指针
void printT1(Teacher *const t) {
    t->age = 33;
    cout << t->age << endl;

}

int main02() {
    Teacher teacher;
    teacher.age = 30;
    printTeacher(teacher);
    cout << teacher.age << endl;
    printT1(&teacher);
//    test01();
    return 0;
}

//命名空间
int main01() {
    name::func1();
    name::func2(200);
    return 0;
}
