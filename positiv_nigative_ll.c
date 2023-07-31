#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	int data;
	struct node *next;
}NODE;

void main()
{
	NODE *temp1,*temp2,*list1=NULL,*list2=NULL,*newnode;
	int i,n;
	printf("enter limit=");
	scanf("%d",&n);
     for(i=0;i<n;i++)
	 {
	    newnode=(NODE*)malloc(sizeof(NODE));
		printf("\nenter value=");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(newnode->data>0)
		     {
			    if(list1==NULL)
			    {
			    	list1=temp1=newnode;
				}
				else
				{
					temp1->next=newnode;
					temp1=newnode;
				}
			 }
		else
	       {
	        	if(list2==NULL)
			    {
			    	list2=temp2=newnode;
				}
				else
				{
					temp2->next=newnode;
					temp2=newnode;
				}	
			} 	
	 }	
	 printf("\n dislay +tive linked list=\n");
	 for(temp1=list1;temp1!=NULL;temp1=temp1->next)
	 {
	 	printf("%d\t",temp1->data);
	 }
    printf("\ndislay -tive linked list=\n");
	 for(temp2=list2;temp2!=NULL;temp2=temp2->next)
	 {
	 	printf("%d\t",temp2->data);
	 }
}