#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define scanf scanf_s
#define MAXSIZE 100
#define SeqList struct listtype

SeqList
{
    int     data[MAXSIZE];
	int     cnt;
};
//==============================================================

//input, create, output(display) a list
void GenDplay(SeqList *L)
{
		int     ii;
	printf("\n  input the quantity of list:  ");
	scanf("%d",&L->cnt);
	printf("\n");

	for(ii=0;ii<L->cnt;ii++)
	{
		printf("  input No%d data  ",ii+1);
		scanf("%d",&L->data[ii]);
	}

	printf("\n  The list created by U is:  \n");
	for(ii=0;ii<L->cnt;ii++)
		printf("  %d",L->data[ii]);
	printf("\n\n");
}
//==============================================================

void DelElemNum(SeqList *L,int minD,int maxD)
{
	int nn=0;
	int jj;

	if(L->cnt == 0 )
		printf("  The list is empty,NO ELEM to delete!\n\n");
	else
	{
		while(nn<L->cnt)
		{
			if(L->data[nn]>minD && L->data[nn]<maxD)
			{
				for(jj=nn;jj<L->cnt;jj++)
					L->data[jj]=L->data[jj+1];
				L->cnt--;
			}
			else
				nn++;
		}
		if(L->cnt == 0 )
			printf("  The list is empty after deletion!!!\n\n");
		else
		{
			printf("  The list after Deletion is: \n");
			for(jj=0;jj<L->cnt;jj++)
				printf("  %d",L->data[jj]);
			printf("\n\n");
		}
	}
}
//==============================================================
int main(void)
{
	printf("实验 1.2 线性表元素的区间删除\n");
	printf("姓名：赵巍\n");
	printf("学号：031910115\n");
	printf("==============================================\n");
	int	x;

	SeqList *L;
	L = (SeqList *)malloc(sizeof(SeqList));

//No 1 TestCase: to delete the data element in the middle of the list
	printf("\n\n");
	printf("  No 1 TestCase\n");
	printf("  data quantity: 10\n");
	printf("  data list: 4 -8 2 12 1 5 9 3 3 10\n");
	printf("  minD=0  \n");
	printf("  maxD=4  \n");
	GenDplay(L);
	DelElemNum(L,0,4);

//No 2 TestCase: to delete the data element at the ends of the list
	printf("\n\n");
	printf("  No 2 TestCase\n");
	printf("  data quantity: 6\n");
	printf("  data list: 23 21 46 9 90 12\n");
	printf("  minD=9  \n");
	printf("  maxD=46  \n");
	GenDplay(L);
	DelElemNum(L,9,46);

//No 3 TestCase: to delete all the data element in the list
	printf("\n\n");
	printf("  No 3 TestCase\n");
	printf("  data quantity: 6\n");
	printf("  data list: 1 2 3 4 5 6\n");
	printf("  minD=0  \n");
	printf("  maxD=100  \n");
	GenDplay(L);
	DelElemNum(L,0,100);

//No 4 TestCase: No data element in the list to delete
	printf("\n\n");
	printf("  No 4 TestCase\n");
	printf("  data quantity: 1\n");
	printf("  data list: 256\n");
	printf("  minD=10  \n");
	printf("  maxD=200  \n");
	GenDplay(L);
	DelElemNum(L,10,200);

//exit the program
	printf("\n\n");
	printf("  Press any key to exit  ");
	scanf("%d",&x);
	return(0); 
}
