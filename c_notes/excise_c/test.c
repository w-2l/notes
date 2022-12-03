//
// Created by DELL on 2022/12/3.
//

#include "test.h"

//计算某日是该年的第几天
void WhatDay(void)
{
    int year,mon,day;
    printf("Enter date(mm/dd/yyyy):\n");
    scanf_s("%d/%d/%d",&mon,&day,&year);
    //用数组来存月份，更加方便
    int month[12] = {31,30,31,30,31,30,31,31,30,31,30,31};
//    switch(mon)
//    {
//        case 1:
//            mon = 0;
//            break;
//        case 2:
//            mon = 31;
//            break;
//        case 3:
//            mon = 61;
//            break;
//        case 4:
//            mon = 92;
//            break;
//        case 5:
//            mon = 122;
//            break;
//        case 6:
//            mon = 153;
//            break;
//        case 7:
//            mon = 183;
//            break;
//    }
    //common year
    int date,sum=0;
    for(;mon-1>0;mon--)
        sum+=month[mon];
    date = day + sum;
    //leap year
    if((year%4==0&&year%100!=0)||year%400==0)
        printf("第%d天",date-1);
    else
        printf("第%d天",date);

}
//求一个整数任意次方后最后的三位数
void LastThreeNum(void) {
    //获取输入
    int x, y;
    int last = 1;
    printf("Enter two integer x y(the last three numbers of x^y):\n ");
    scanf_s("%d%d", &x, &y);
    //避免幂太大溢出
    for (int i = 0; i < y; i++)
        last = last * x % 1000;
    printf("The last three numbers is %3d",last);

}
