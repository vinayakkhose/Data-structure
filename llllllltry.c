#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node* create(struct node*head)
{
	struct node *newnode,*temp;
	int i,n;
	printf("Enter limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
    	newnode=(struct node*)malloc(sizeof(struct node));
    	printf("Enter value=");
    	scanf("%d",&newnode->data);
    	newnode->next=NULL;
    	if(head==NULL)
    	{
    		head=temp=newnode;
    		temp->next=head;
		}
		else
		{
			temp->next=newnode;
			newnode->next=head;
			temp=newnode;
		}
	}
	return head;
}

void display(struct node *head)
{
	struct node *temp=head;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
struct node* insertbeg(struct node*head)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter value=");
	scanf("%d",&newnode->data);
	for(temp=head;temp->next!=head;temp=temp->next);
	newnode->next=head;
	head=newnode;
	temp->next=head;
	return head;
}
struct node* insertmid(struct node*head,int pos)
{
	struct node *newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter value=");
	scanf("%d",&newnode->data);
	for(i=1,temp=head;i<(pos-1)&&temp->next!=head;temp=temp->next);
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
}
struct node *search(struct node *head)
{
 struct node *temp;
 int num;
 printf("\n enter number to seach=");
 scanf("%d",&num);
 for(temp=head;temp->next!=NULL;temp=temp->next)
 {
   if(temp->data==num)
     return  temp;
	 return temp;	
 }
}
 void main ()
 {
 	int n;
   struct node *head=NULL;
   head=create(head);
   n= search(head);
   if(n==NULL)
   printf("\n not found");
   else
   printf("\n found");  	
 }	
