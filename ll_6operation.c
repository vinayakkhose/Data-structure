#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* create(struct node*head)
{
	int i,n;
	struct node *newnode,*temp;
	printf("enter limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter value=");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
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
struct node* insertbeg(struct node *head,int num)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=head;
	head=newnode;
	return head;
}
struct node* insertend(struct node *head,int num)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	for(temp=head;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	return head;
}
struct node* insertmid(struct node *head,int pos,int num)
{
	struct node *newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	for(i=1,temp=head;i<(pos-1) && temp->next!=NULL;i++,temp=temp->next);
	 newnode->next=temp->next;
	 temp->next=newnode;
	 return head;
}
struct node* delbeg(struct node *head)
{
	struct node *p;
	p=head;
	head=head->next;
	free(p);
	return head;
}
struct node* delend(struct node*head)
{
	struct node *p,*temp;
	for(temp=head;temp->next->next!=NULL;temp=temp->next);
	p=temp->next;
	temp->next=NULL;
	free(p);
	return head;
	
}
struct node* delmid(struct node *head,int pos)
{
	struct node *temp,*p;
	int i;
	for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
	p=temp->next;
	temp->next=p->next;
	free(p);
	return head;
}
struct node *deval(struct node *list)
 {
 	struct node *temp,*p;
 	for(temp=list;temp->next->next!=NULL;temp=temp->next);
 	p=temp->next;
 	temp->next=NULL;
 	p->next=list;
 	return p;
 }
void main()
{
	struct node *head=NULL;
	int num,ch,pos;
	do
	{
	 printf("\n 1-create \n 2-display \n 3-insert begi \n 4-insert end \n 5-insert mid ");
	 printf("\n 6-delete begin \n 7-delete end \n 8-delete mid \n 9-delete end & insert beg \n enter choice=");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:head=create(head);
	 	           break;
	 	case 2:display(head);
	 	        break;
	 	case 3:printf("Enter value=");
	 	       scanf("%d",&num);
	 	       head=insertbeg(head,num);
	 	       break;
	 	case 4:printf("Enter value=");
	 	       scanf("%d",&num);
	 	       head=insertend(head,num);
	 	       break;
	 	case 5:printf("Enter value=");
	 	       scanf("%d",&num);
	 	       printf("enter possition=");
	 	       scanf("%d",&pos);
	 	       head=insertmid(head,pos,num);
	 	       break;
	 	case 6:head=delbeg(head);
	 	       break;
	 	case 7:head=delend(head);
	 	       break;
	 	case 8:printf("Enter position=");
	 	        scanf("%d",&pos);
	 	        head=delmid(head,pos);
	 	            break;
	 	case 9:head=deval(head);
	 	          display(head);
	 	default :printf("invalid choice..");
		 }	
	}while(ch<10);
}