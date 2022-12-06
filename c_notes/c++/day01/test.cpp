//
// Created by DELL on 2022/12/5.
//

#include "test.h"
#include <iostream>

using namespace std;

// 引用 type& name = var;//type 是 var 的类型
void test01(){
    int a = 10;
    // int& b;// 'b' declared as reference but not initialized
    int& b = a;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << endl;
    b = 100;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << endl;
    cout << "a:" << &a << endl;
    cout << "b:" << &b << endl;
}
// 命名空间
void MySpace::func1() {
    cout << "void MySpace::func1()" << endl;
}
void MySpace::func2(int x) {
    cout << "void MySpace::func2():" << x << endl;
}