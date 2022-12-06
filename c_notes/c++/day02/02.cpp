//
// Created by DELL on 2022/12/5.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                              函数的重载
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
 void func()
 {
     cout << "void func()" << endl;
 }
 void func(int c)
 {
     cout << " void func(int c)" << endl;
 }
 void func(char ch)
 {
     cout << "void func(char ch)" <<endl;
 }


int main11()
{
    func();
    func(10);
    func('H');
    return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                          类和对象
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
class CAnmal
{
public:
    // 属性 成员变量
    char name[32];
    int age;

    // 方法 成员函数
    void jiao(const char *voice)
    {
        // 直接访问成员变量
        cout << name << ":" << age <<endl;
    }
};
class Teacher1{
public:
    char name[32];
    void set_age(int age)
    {
        if(age > 0 && age < 100)
            _age = age;
        return;
    }
    int get_age()
    {return _age;}
private:
    int _age;
    char _sex;
};
int main()
{
//    CAnmal cat;
//    CAnmal cats[10];
//    CAnmal *p;
//    p = &cat;
//    memset(cat.name,0,sizeof(cat.name));
//    strcpy(cat.name,"xiaohau");
//    cat.age = 10;
//    cat.jiao("miao");
//    p->age = 20;

    Teacher1 t;
    t.set_age(20);
    cout << t.get_age() << endl;
    return 0;
}