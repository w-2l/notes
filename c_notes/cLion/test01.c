//
// Created by DELL on 2022/11/10.
//
//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#define MAXSIZE 1024
//typedef int Status;
//typedef int QElemType;
//typedef struct queue
//{
//    QElemType data[MAXSIZE];
//    //头指针
//    int front;
//    //尾指针,指向队尾的下一个元素
//    int rear;
//
//}SqQueue;
////初始化队列
//Status InitQueue(SqQueue *Q)
//{
//    Q->front = 0;
//    Q->rear = 0;
//    return 0;
//}
////队列当前长度
//Status QueueLen(SqQueue *Q)
//{
//    //front<rear时，len=rear-front
//    //front>rear时，len=rear+MAXSIZE-front
//    return (Q->rear-Q->front+MAXSIZE)%MAXSIZE;
//}
////入队
//Status EnQueue(SqQueue *Q,QElemType e)
//{
//    //队满
//    if((Q->rear+1)%MAXSIZE == Q->front)
//    {
//        return 0;
//    }
//    Q->data[Q->rear] = e;
//    //尾指针后移
//    Q->rear = (Q->rear+1)%MAXSIZE;
//    return 1;
//
//}
////出队
//Status OutQueue(SqQueue *Q,QElemType *e)
//{
//    //队空
//    if(Q->rear == Q->front)
//        return 0;
//    //e接受出队的元素
//    *e = Q->data[Q->front];
//    Q->front=(Q->front+1)%MAXSIZE;
//    return 1;
//}
////队空
//Status EmQueue(SqQueue q)
//{
//    if(q.rear == q.front)
//        return 0;
//    else
//        return 1;
//}
//
//int main01()
//{
//    printf("==============================================\n");
//    printf("2.   SeQueue\n");
//    printf("NAME:Zhao Wei\n");
//    printf("NUMBER:031910115\n");
//    printf("==============================================\n");
//    time_t raw_time;
//    struct tm* tm;
//    time(&raw_time);   // 获取当前调试时间
//    tm = localtime(&raw_time);
//    printf("Current local time and date: %s", asctime(tm));
//    QElemType e = 1;
//    SqQueue q;
//    int i;
//
//    i = InitQueue(&q);
//    if (!i) printf("Init Queue success!\n");
//    printf("Please input data to insert queue,input 0 to end\n");
//    while(1)
//    {
//        printf("Input data:");
//        scanf_s("%d",&e);
//        if(0 == e)
//            break;
//        else
//            EnQueue(&q,e);
//    }
//    printf("The Queue : %d(0 is empty;1 is not empty\n)", EmQueue(q));
//    printf("The length of Queue: %d\n", QueueLen(&q));
//    OutQueue(&q,&e);
//    printf("The data out Queue is %d\n",e);
//    printf("The length of Queue: %d\n", QueueLen(&q));
//    //清空队列
//    q.rear = q.front;
//    printf("The Queue : %d(0 is empty;1 is not empty)", EmQueue(q));
//
//    tm = localtime(&raw_time);
//    printf("Current local time and date: %s", asctime(tm));
//
//    return 0;
//}
