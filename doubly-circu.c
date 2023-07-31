#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *prev,*next;
}dnode;

dnode *list=NULL;

dnode *create()
{
	dnode *newnode,*temp;
	int i,n,num;
	printf("\n enter how many elements in list=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	newnode=(dnode*)malloc(sizeof(dnode));
	printf("\n enter value=");
	scanf("%d",&num);
	newnode->data=num;
	if(list==NULL)
	{
		list=temp=newnode;
		temp->next=list;
		list->prev=temp;
	}
	else
	{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
		temp->next=list;
		list->prev=temp;
	}
}
	return list;
}
dnode *insbeg(int num)
{
	dnode *temp,*newnode;
	for(temp=list;temp->next!=list;temp=temp->next);
	newnode=(dnode*)malloc(sizeof(dnode));
	newnode->data=num;
	newnode->next=list;
	list->prev=newnode;
	list=newnode;
	temp->next=list;
	list->prev=temp;
	return list;
}
dnode *insmid(int num,int pos)
{
	dnode *newnode,*temp;
	int i;
	newnode=(dnode*)malloc(sizeof(dnode));
	newnode->data=num;
	if(pos==1)
	{
	  newnode->next=list;
	list->prev=newnode;
	list=newnode;
	temp->next=list;
	list->prev=temp;
	return list;	
	}
	else
	{
		for(i=0,temp=list;i<pos-1 && temp->next!=list;i++,temp=temp->next);
		 newnode->next=temp->next;
		 temp->next->prev=newnode;
		 temp->next=newnode;
		 newnode->prev=temp;
		 return list;
	}
}
dnode *insend(int num)
{
	dnode *newnode,*temp;
	for(temp=list;temp->next!=list;temp=temp->next);
	newnode=(dnode*)malloc(sizeof(dnode));
	newnode->data=num;
	temp->next=newnode;
	newnode->prev=temp;
	 temp=newnode;
	 temp->next=list;
	list->prev=temp;
	return list;
}
void display()
{
	dnode *temp=list;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=list);
}
void main()
{
	int num,pos,ch;
	do
	{
		printf("\n1-create \n 2-insert begining \n 3-insert mid \n 4-insert end \n 5-display");
		printf("\n enter chioce=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:list=create(list);
			    break;
			case 2:printf("\n enter number to add begining=");
			        scanf("%d",&num);
			        list=insbeg(num);
			        break;
			case 3:printf("\n enter number to add mid=");
			        scanf("%d",&num);
			        printf("etnter position to add number=");
			        scanf("%d",&pos);
			        list=insmid(num,pos);
			        break;
			case 4:printf("\n enter number to add end=");
			        scanf("%d",&num);
			        list=insend(num);
			        break;
			case 5:display(list);
		}
	}while(ch!=6);
}