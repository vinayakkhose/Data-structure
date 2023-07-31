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
struct node* insertbeg(struct node*head)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("ente value");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
	return head;
}
struct node* insertend(struct node*head)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value=");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	for(temp=head;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	newnode->prev=temp;
	return head;
}
struct node* insertmid(struct node*head,int pos)
{
	struct node *newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value=");
	scanf("%d",&newnode->data);
	for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);

	newnode->next=temp->next;
	temp->next->prev=newnode;
	temp->next=newnode;
	newnode->prev=temp;
	return head;
}
struct node *delbeg(struct node*head)
{
	struct node *p;
	p=head;
	head=head->next;
	free(p);
	return head;
}
struct node* delend(struct node*head)
{
	struct node *temp,*p;
	for(temp=head;temp->next->next!=NULL;temp=temp->next);
	p=temp->next;
	temp->next=NULL;
	free(p);
	return head;
}
struct node * delmid(struct node*head,int pos)
{
	struct node *temp,*p;
	int i;
	for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
	p=temp->next;
	temp->next=p->next;
	p->next->prev=temp;
	free(p);
	return head;
}
void dis_rev(struct node *head)
{
	struct node *temp=head;
       for(temp=head;temp->next!=NULL;temp=temp->next);
       do
       {
       	printf("%d\t",temp->data);
       	temp=temp->prev;
	   }while(temp->prev!=NULL);
}
void main()
{
  struct node *head=NULL;
  int num,ch,pos;
do
{
 printf("\n1-create\n2-display\n3-insert at begin");
 printf("\n4-insert at end\n5-insert at mid");
 printf("\n6-delete begin\n7-delete end\n8-delete mid");
 printf("\n enter choice");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:head=create(head);
          break;
   case 2:display(head);
          break;
   case 3:head=insertbeg(head);
          break;
   case 4:head=insertend(head);
          break;
   case 5:printf("enter position");
          scanf("%d",&pos);
        head=insertmid(head,pos);
          break;
  case 6:head=delbeg(head);
          break;

   case 7:head=delend(head);
          break;
   case 8:printf("enter position");
          scanf("%d",&pos);
          head=delmid(head,pos);
          break;
    case 9:dis_rev(head);
            break;
   default : printf("invalid choice");
 }

}while(ch<10);

}
