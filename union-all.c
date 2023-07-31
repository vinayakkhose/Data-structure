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
//	struct node *uni(struct node *list1,struct node *list2)
//	{
//		struct node *t,*t1=list2,*l3=NULL,*temp1,*newnode;
//		int temp;
//	for(t=list1;t->next!=NULL;t=t->next);
//	t->next=list2;
//	
//	for(t=list1;t->next!=NULL;t=t->next)
//	{
//	     temp=t->data;
//		 for(t1=t->next;t1!=NULL;t1=t1->next)
//		 {
//		      if(temp!=t1->data)
//			  {
//			  	newnode=(struct node*)malloc(sizeof(newnode));
//			  	newnode->data=temp;
//			      if(l3==NULL)
//				   {
//				        l3=temp1=newnode; 	
//				   }
//				  else
//				   {
//				 	 temp1->next=newnode;
//				 	 temp1=newnode;
//				   }	
//			  }	
//	     }	
//	}
//	return  list1;
//	}
struct node* sum(struct node *list1,struct node *list2)
{
	struct node* l3=NULL,*temp,*t=list1,*t1=list2,*newnode;
	int s=0,d,n=0;
	
	while(t!=NULL && t1!=NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		s=t->data+t1->data;
		d=s%10;
		if(s<=9)
		{
		newnode->data=d;
		if(l3==NULL)
		{
			l3=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	   }
	   else
	   {
		 newnode->data=d;
		  if(l3==NULL)
		   {
			l3=temp=newnode;
	       }
		  else
		   {
			temp->next=newnode;
			temp=newnode;
		   }
		   n=s/10; 	
	   }
		t=t->next;
		t1=t1->next;
	}
	while(t!=NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		s=t->data;
		 d=s%10;
		if(s<=9)
		{
		 newnode->data=d;
		 temp->next=newnode;
		 temp=newnode;
	    }
	    else
	    {
	       newnode->data=d+n;
		   temp->next=newnode;
		   n=s/10;
		   temp=newnode;
		   	
		}
	    
		t=t->next;
	}
	while(t1!=NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		s=t1->data;
		d=s%10;
		if(s<=9)
		{
		newnode->data=d;
		temp->next=newnode;
		temp=newnode;
	    }
		else
	    {
	      
	       newnode->data=d+n;
		   temp->next=newnode;
		   n=s/10;
		   temp=newnode;
		   	
		}
		t1=t1->next;
	}
	temp->next=NULL;
	return l3;
}
int main()
{
	struct node *list1=NULL,*list2=NULL,*l3=NULL;
       list1=create(list1);
       list2=create(list2);
       printf("\n list1 : \t");
       display(list1);
       printf("\n list2 : \t");
       display(list2);
       
       //l3=uni(list1,list2);
	   
	   
	    l3=sum(list1,list2);
	   printf("\n list3 : \t"); 
       display(l3);
}