/**
 * Copyright © 2022 Silvester. All rights reserved.
 * 
 * @author: w2l
 * @date: 周六  2022-12-10 
 */
#include <iostream>


using namespace std;

class Test
{
public:
    int *sum;
    int x;
    int y;

    Test()
    {
        cout << "Test" << endl;
        x = 0;
        y = 0;
        sum = new int[4];
    }
    Test(int a, int b):x(a), y(b)
    {
        cout << "Test(int a, int b)" << endl;
        sum = new int[4];
    }
    ~Test()
    {
        cout << "~Test" << endl;
        delete[] sum;
    }
};
int main()
{
    Test *t1 = new Test(10,20);
    t1->sum[0] = 5;
    t1->sum[1] = 10;
    t1->sum[2] = 20;
    cout << t1->x << "\t" << t1->y << endl;
    cout << "t1.sum: " << t1->sum << endl;   
    Test t2 =*t1;
    cout << "t2.sum[0]: " << t2.sum[0] << endl;
    delete t1;
    cout << "t2.sum[0]: " << t2.sum[0] << endl;
    cout << "t1.sum: " << t1->sum << endl;
    cout << "t2.sum: " << t2.sum << endl;
    // ?可以在手动delete t1中sum指向的空间delete，那么t2.sum会怎么样
    return 0;
}
