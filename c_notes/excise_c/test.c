//
// Created by DELL on 2022/12/3.
//

#include "test.h"

//����ĳ���Ǹ���ĵڼ���
void WhatDay(void)
{
    int year,mon,day;
    printf("Enter date(mm/dd/yyyy):\n");
    scanf_s("%d/%d/%d",&mon,&day,&year);
    //�����������·ݣ����ӷ���
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
        printf("��%d��",date-1);
    else
        printf("��%d��",date);

}
//��һ����������η���������λ��
void LastThreeNum(void) {
    //��ȡ����
    int x, y;
    int last = 1;
    printf("Enter two integer x y(the last three numbers of x^y):\n ");
    scanf_s("%d%d", &x, &y);
    //������̫�����
    for (int i = 0; i < y; i++)
        last = last * x % 1000;
    printf("The last three numbers is %3d",last);

}
