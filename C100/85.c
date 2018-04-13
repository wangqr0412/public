#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define OK 0
#define ERROR -1

typedef int data_t;

typedef struct node_t
{
	data_t data;
	struct node_t *next;
}Node;

Node *CreateEmptyList()
{
	Node *ls=NULL;
	ls=(Node *)malloc(sizeof(Node));
	if(NULL == ls)
	{
		printf("CreateEmptyList faild \n");
		exit(ERROR);
	}
	ls->next=NULL;
	return ls;
}

int HeadInsert(Node *ls)
{
	if(NULL ==ls)
	{
		printf("This linglist is not exist\n");
		exit(ERROR);
	}
	Node *nd=NULL;
	int i;
	for(i=0;i<5;i++)
	{
		nd=(Node *)malloc(sizeof(Node));
		if(NULL ==nd)
		{
			printf("create nd faild \n");
			exit(ERROR);
		}
		nd->data=i+2;
		nd->next=ls->next;
		ls->next=nd;
	}
	return OK;
}

int TailInsert(Node *ls)
{
	Node *s=NULL;
	Node *nd=NULL;
	s=ls;
	int i;
	for(i=0;i<5;i++)
	{
		nd=(Node *)malloc(sizeof(Node));
		nd->data=i+1;
		s->next=nd;
		s=s->next;
	}
	s->next=ls;
	return OK;
}

int TestLingRing(Node *ls)
{
	Node *p=NULL;
	Node *q=NULL;
	p=q=ls;
	q=q->next->next;
	while(p->next && q->next)
	{
		p=p->next;
		if(NULL == q)
			return 0;
		if(p==q)
			return 1;
	}
	return 0;
}

int Print(Node *ls)
{
	Node *s=NULL;
	s=ls;
	while(s->next != ls)
	{
		printf("%d ",s->data);
		s=s->next;
	}
	printf("\n");
	return OK;
}

int main(int argc, const char *argv[])
{
	Node *ls=NULL;
	ls=CreateEmptyList();
	//HeadInsert(ls);
	TailInsert(ls);
	Print(ls);
	int i;
	i=TestLingRing(ls);
	if(i==0)
		printf("No\n");
	if(i==1)
		printf("Yes\n");
	return 0;
}



