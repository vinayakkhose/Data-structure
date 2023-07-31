#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left,*right;
}TNODE;

TNODE *create(TNODE *tree,int num)
{
	 TNODE *newnode;
	if(tree==NULL)
	{
	    newnode=(TNODE*)malloc(sizeof(TNODE));
		newnode->data=num;	
		newnode->left=newnode->right=NULL;
		return newnode;
	}
	else
	{
	   if(tree->data>=num)
	   {
	    tree->left=create(tree->left,num);
			
	   }	
	   else
	   {
	   	tree->right=create(tree->right,num);
	   
	   }
	}
	return tree;
}
void inorder(TNODE *tree)
{
	if(tree==NULL)
	   return;
	   else
	   {
	   	inorder(tree->left);
	   	printf("\t %d",tree->data);
	   inorder(tree->right);
	   }
}
void main()
{
	TNODE *tree;
	int ch,num;
	do
	{
		printf("\n 1-create \n 2-inorder");
		printf("\n enter choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter number=");
			         scanf("%d",&num);
			         tree=create(tree,num);
			         break;
			case 2:inorder(tree);
			              break;
		}
	}while(ch!=3);
}