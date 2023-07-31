#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next,*prev;
	};
	struct node* create(struct node*head)
	{
		int i,n;
		struct node *newnode,*temp;
		printf("Enter limit=");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		 newnode=(struct node*)malloc(sizeof(struct node));
		 printf("Enter value=");
		 scanf("%d",&newnode->data);
		 newnode->next=NULL;
		 if(head==NULL)
		 {
		 	head=temp=newnode;
		 }
		 else
		 {
		   temp->next=newnode;
		   newnode->prev=temp;
		   temp=newnode;
		 }
		}
		return head;
	}

	void display(struct node*head)
	{
		struct node *temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
struct node* insertcomon(struct node*head ,int poss)
{
	struct node *newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("ente value");
	scanf("%d",&newnode->data);
	if(poss==1)
	{
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
   }
   else
   {
   	for(i=1,temp=head;i<(poss-1)&&temp->next!=NULL;i++,temp=temp->next);
	newnode->next=temp->next;
	temp->next->prev=newnode;
	temp->next=newnode;
	newnode->prev=temp;
   }
	return head;
}
struct node * delcom(struct node*head,int poss)
{
	struct node *temp,*p;
	int i,n;
	if(poss==1)
	{
	p=head;
	head=head->next;
	free(p);
	}
	else
	{
	for(i=1,temp=head;i<(poss-1)&&temp->next->next!=NULL;i++,temp=temp->next);
	p=temp->next;
	temp->next=p->next;
	p->next->prev=temp;
	free(p);
    }
	return head;
}
void main()
{
  struct node *head=NULL;
  int num,ch,poss;
do
{
 printf("\n1-create\n2-display\n3-insert comon");
 printf("\n4-delete comon");
 printf("\n enter choice");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:head=create(head);
          break;
   case 2:display(head);
          break;
   case 3:printf("enter position");
          scanf("%d",&poss);
          head=insertcomon(head,poss);
          break;
   case 4:printf("enter position");
          scanf("%d",&poss);
          head=delcom(head,poss);
          break;
   default : printf("invalid choice");
 }

}while(ch!=5);

}
