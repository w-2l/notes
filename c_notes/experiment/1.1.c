#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"ctype.h"
#include <time.h>       /* time_t, struct tm, time, localtime */
typedef struct node          //定义结点
{
	char data[10];             //结点的数据域为字符串
	struct node *next;      //结点的指针域
}ListNode;


typedef ListNode * LinkList;         // 自定义LinkList单链表类型
LinkList CreatListR1();              //函数，用尾插入法建立带头结点的单链表
ListNode * AddNode(LinkList head);
ListNode *LocateNode(LinkList head, char *key);              //函数，按值查找结点
void DeleteList(LinkList head,char *key);                   //函数，删除指定值的结点
void printlist(LinkList head);                    //函数，打印链表中的所有值
void DeleteAll(LinkList head);                    //函数，删除所有结点，释放内存


//==========主函数==============

int main()
{   time_t rawtime;
    struct tm * timeinfo;
	char ch[10],num[5];
	LinkList head;

	printf("==============================================\n");
	printf("实验 1.1 ：单链表的插入和删除\n");
	printf("姓名：赵巍\n");
	printf("学号：031910115\n");
	printf("==============================================\n");
	
	
	
	time (&rawtime);   // 获取当前调试时间 
	timeinfo = localtime (&rawtime);
	printf ("Current local time and date: %s", asctime(timeinfo));
	
	head=CreatListR1();
	printlist(head);             //遍历链表输出其值
	
	while(1)
	{
	printf(" Delete node (y/n):");  //输入"y"或"n"去选择是否删除结点
		scanf("%s",num);
		if(strcmp(num,"y")==0 || strcmp(num,"Y")==0){
			printf("Please input Delete_data:");
			scanf("%s",ch);	        //输入要删除的字符串
			DeleteList(head,ch);
			
		}
		printlist(head);
		
		printf(" Add node ? (y/n):");  //输入"y"或"n"去选择是否增加结点
		scanf("%s",num);
		if(strcmp(num,"y")==0 || strcmp(num,"Y")==0)
		{
			head=AddNode(head);
		}
		else if(strcmp(num,"n")==0 || strcmp(num,"N")==0)
		{
			break;
		}
		printlist(head);	//TODO
	}
		
	DeleteAll(head);            //删除所有结点，释放内存
	
	time (&rawtime);
	timeinfo = localtime (&rawtime);
	printf ("Current local time and date: %s", asctime(timeinfo));
	return(0); 
}
//==========用头插入法建立带头结点的单链表===========
LinkList CreatListR1(void)
{
    char ch[10];
    LinkList head=(LinkList)malloc(sizeof(ListNode)); //生成头结点
    ListNode *s,*r, *pp;
    r=head;
    r->next=NULL;
    printf("Input # to end  ");  //输入"#"代表输入结束
    printf("\nPlease input Node_data:");
    scanf("%s",ch);           //输入各结点的字符串

    while(strcmp(ch,"#")!=0) {         
		pp=LocateNode(head,ch);      //按值查找结点，返回结点指针
		
		if(pp==NULL) {            //没有重复的字符串，插入到链表中
			s=(ListNode *)malloc(sizeof(ListNode));
			strcpy(s->data,ch);
			s->next=r->next;
			r->next=s;
		}
		printf("Input # to end  ");
		printf("\nPlease input Node_data:");
		scanf("%s",ch);
    }
    return head;        //返回头指针
}



//==========按值查找结点，找到则返回该结点的位置，否则返回NULL==========
ListNode *LocateNode(LinkList head, char *key)
{
    ListNode *p=head->next; //从开始结点比较
    while(p!=NULL && strcmp(p->data,key)!=0)  //直到p为NULL或p->data为key止
		p=p->next;        //扫描下一个结点
    return p;    //若p=NULL则查找失败，否则p指向找到的值为key的结点
}

//==========修改程序：增加节点=======
ListNode * AddNode(LinkList head)
{
    char ch[10];
	ListNode *s,*pp;

    printf("\nPlease input a New Node_data:");
    scanf("%s",ch);           //输入各结点的字符串

	pp=LocateNode(head,ch);      //按值查找结点，返回结点指针
	printf("ok2\n");	

	if(pp==NULL) {            //没有重复的字符串，插入到链表中
		s=(ListNode *)malloc(sizeof(ListNode));
		strcpy(s->data,ch);
		printf("ok3\n");

		s->next=head->next;
		head->next=s;
	}

	return head;

}

//==========删除带头结点的单链表中的指定结点=======
void DeleteList(LinkList head,char *key)
{
    ListNode *p,*r,*q=head;
    p=LocateNode(head,key);    //按key值查找结点的
    if(p==NULL ) {            //若没有找到结点，退出
		printf("position error\n");
		//exit(0);
    
	}
	else
	{
	while(q->next!=p)        //p为要删除的结点，q为p的前结点
			q=q->next;
	    r=q->next;
	    q->next=r->next;
	    free(r);                //释放结点	
	}
    
}
//===========打印链表=======
void printlist(LinkList head)
{
    ListNode *p=head->next;       //从开始结点打印
    while(p){
		printf("%s,   ",p->data);
		p=p->next;
    }
    printf("\n");
}
//==========删除所有结点，释放空间===========
void DeleteAll(LinkList head)
{
    ListNode *p=head,*r;
    while(p->next){
		r=p->next;
		free(p);
		p=r;
	}
	free(p);
}
