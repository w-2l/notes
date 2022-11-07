
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
typedef struct linkNode
{
	int data;
    struct linkNode * next;
}LinkNode;
void printName()
{
	printf("==============================================\n");
	printf("ʵ��1.2 ���Ա�Ԫ�ص�����ɾ��\n");
	printf("��������Ρ\n");
	printf("ѧ�ţ�031910115\n");
	printf("==============================================\n");
}
void printTime()
{
	time_t rawtime;
	struct tm* timeinfo;
	time(&rawtime);   // ��ȡ��ǰ����ʱ�� 
	timeinfo = localtime(&rawtime);
	printf("\nCurrent local time and date: %s", asctime(timeinfo));
}

//��������
LinkNode* GenDplay()
{
	
	LinkNode *p1, *p2, *head;
	int num, i, n;
	head = (LinkNode*)malloc(sizeof(LinkNode));
    p1 = head;
	p1->next = NULL;

	//��ʾ����
	printf("\n  input the quantity of list:  ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n  input No%d data  ", i + 1);
		scanf("%d", &num);
		//��ʼ��
		p2 = (LinkNode*)malloc(sizeof(int));
		p2->data = num;
		p2->next = NULL;
		//������ϵ
		p1->next = p2;
		p1=p2;
	}
	//�������д�ӡ
	p1 = head->next;
	printf("\n  The list created by U is:  \n");
	for (i = 0; i < n; i++)
	{
		printf("    %d", p1->data);
		p1 = p1->next;
	}
	printf("\n");
	return head;
}

//ɾ���м�ֵ
void DelElemNum(LinkNode* head, int min, int max)
{
	LinkNode* p,*p1;

	p = head;
	p1 = p->next;
	while (p->next != NULL)
	{
		if (p1->data > min && p1->data < max)
		{
			p1=p->next;
			p->next = p1->next;
			free(p1);
			p1=p->next;
		}
		else
		{	
			p=p->next;
			p1=p->next;
		}
	}
	printf(" The list after Deletion is: \n");
	p1 = head;
	while(p1->next!=NULL)
	{
		p1 = p1->next;
		printf("    %d", p1->data);
	}
}

int main()
{
	LinkNode*  head;
	printName();
	printTime();
	//No 1 TestCase: to delete the data element in the middle of the list
	printf("\n\n");
	printf("  No 1 TestCase\n");
	printf("  data quantity: 10\n");
	printf("  data list: 4 -8 2 12 1 5 9 3 3 10\n");
	printf("  minD=0  \n");
	printf("  maxD=4  \n");
	head=GenDplay();
	DelElemNum(head, 0, 4);

	//No 2 TestCase: to delete the data element at the ends of the list
	printf("\n\n");
	printf("  No 2 TestCase\n");
	printf("  data quantity: 6\n");
	printf("  data list: 23 21 46 9 90 12\n");
	printf("  minD=9  \n");
	printf("  maxD=46  \n");
	head=GenDplay();
	DelElemNum(head, 9, 46);

	//No 3 TestCase: to delete all the data element in the list
	printf("\n\n");
	printf("  No 3 TestCase\n");
	printf("  data quantity: 6\n");
	printf("  data list: 1 2 3 4 5 6\n");
	printf("  minD=0  \n");
	printf("  maxD=100  \n");
	head=GenDplay();
	DelElemNum(head, 0, 100);

	//No 4 TestCase: No data element in the list to delete
	printf("\n\n");
	printf("  No 4 TestCase\n");
	printf("  data quantity: 1\n");
	printf("  data list: 256\n");
	printf("  minD=10  \n");
	printf("  maxD=200  \n");
	head=GenDplay();
	DelElemNum(head, 10, 200);
	printTime();
	return 0;
}
