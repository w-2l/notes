#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"ctype.h"
#include <time.h>       /* time_t, struct tm, time, localtime */
typedef struct node          //������
{
	char data[10];             //����������Ϊ�ַ���
	struct node *next;      //����ָ����
}ListNode;


typedef ListNode * LinkList;         // �Զ���LinkList����������
LinkList CreatListR1();              //��������β���뷨������ͷ���ĵ�����
ListNode * AddNode(LinkList head);
ListNode *LocateNode(LinkList head, char *key);              //��������ֵ���ҽ��
void DeleteList(LinkList head,char *key);                   //������ɾ��ָ��ֵ�Ľ��
void printlist(LinkList head);                    //��������ӡ�����е�����ֵ
void DeleteAll(LinkList head);                    //������ɾ�����н�㣬�ͷ��ڴ�


//==========������==============

int main()
{   time_t rawtime;
    struct tm * timeinfo;
	char ch[10],num[5];
	LinkList head;

	printf("==============================================\n");
	printf("ʵ�� 1.1 ��������Ĳ����ɾ��\n");
	printf("��������Ρ\n");
	printf("ѧ�ţ�031910115\n");
	printf("==============================================\n");
	
	
	
	time (&rawtime);   // ��ȡ��ǰ����ʱ�� 
	timeinfo = localtime (&rawtime);
	printf ("Current local time and date: %s", asctime(timeinfo));
	
	head=CreatListR1();
	printlist(head);             //�������������ֵ
	
	while(1)
	{
	printf(" Delete node (y/n):");  //����"y"��"n"ȥѡ���Ƿ�ɾ�����
		scanf("%s",num);
		if(strcmp(num,"y")==0 || strcmp(num,"Y")==0){
			printf("Please input Delete_data:");
			scanf("%s",ch);	        //����Ҫɾ�����ַ���
			DeleteList(head,ch);
			
		}
		printlist(head);
		
		printf(" Add node ? (y/n):");  //����"y"��"n"ȥѡ���Ƿ����ӽ��
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
		
	DeleteAll(head);            //ɾ�����н�㣬�ͷ��ڴ�
	
	time (&rawtime);
	timeinfo = localtime (&rawtime);
	printf ("Current local time and date: %s", asctime(timeinfo));
	return(0); 
}
//==========��ͷ���뷨������ͷ���ĵ�����===========
LinkList CreatListR1(void)
{
    char ch[10];
    LinkList head=(LinkList)malloc(sizeof(ListNode)); //����ͷ���
    ListNode *s,*r, *pp;
    r=head;
    r->next=NULL;
    printf("Input # to end  ");  //����"#"�����������
    printf("\nPlease input Node_data:");
    scanf("%s",ch);           //����������ַ���

    while(strcmp(ch,"#")!=0) {         
		pp=LocateNode(head,ch);      //��ֵ���ҽ�㣬���ؽ��ָ��
		
		if(pp==NULL) {            //û���ظ����ַ��������뵽������
			s=(ListNode *)malloc(sizeof(ListNode));
			strcpy(s->data,ch);
			s->next=r->next;
			r->next=s;
		}
		printf("Input # to end  ");
		printf("\nPlease input Node_data:");
		scanf("%s",ch);
    }
    return head;        //����ͷָ��
}



//==========��ֵ���ҽ�㣬�ҵ��򷵻ظý���λ�ã����򷵻�NULL==========
ListNode *LocateNode(LinkList head, char *key)
{
    ListNode *p=head->next; //�ӿ�ʼ���Ƚ�
    while(p!=NULL && strcmp(p->data,key)!=0)  //ֱ��pΪNULL��p->dataΪkeyֹ
		p=p->next;        //ɨ����һ�����
    return p;    //��p=NULL�����ʧ�ܣ�����pָ���ҵ���ֵΪkey�Ľ��
}

//==========�޸ĳ������ӽڵ�=======
ListNode * AddNode(LinkList head)
{
    char ch[10];
	ListNode *s,*pp;

    printf("\nPlease input a New Node_data:");
    scanf("%s",ch);           //����������ַ���

	pp=LocateNode(head,ch);      //��ֵ���ҽ�㣬���ؽ��ָ��
	printf("ok2\n");	

	if(pp==NULL) {            //û���ظ����ַ��������뵽������
		s=(ListNode *)malloc(sizeof(ListNode));
		strcpy(s->data,ch);
		printf("ok3\n");

		s->next=head->next;
		head->next=s;
	}

	return head;

}

//==========ɾ����ͷ���ĵ������е�ָ�����=======
void DeleteList(LinkList head,char *key)
{
    ListNode *p,*r,*q=head;
    p=LocateNode(head,key);    //��keyֵ���ҽ���
    if(p==NULL ) {            //��û���ҵ���㣬�˳�
		printf("position error\n");
		//exit(0);
    
	}
	else
	{
	while(q->next!=p)        //pΪҪɾ���Ľ�㣬qΪp��ǰ���
			q=q->next;
	    r=q->next;
	    q->next=r->next;
	    free(r);                //�ͷŽ��	
	}
    
}
//===========��ӡ����=======
void printlist(LinkList head)
{
    ListNode *p=head->next;       //�ӿ�ʼ����ӡ
    while(p){
		printf("%s,   ",p->data);
		p=p->next;
    }
    printf("\n");
}
//==========ɾ�����н�㣬�ͷſռ�===========
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
