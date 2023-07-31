#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*left,*right;
}NODE;
NODE*createBST(NODE*root,int num)
{
  if(root==NULL)
  {
  	root=(NODE*)malloc(sizeof(NODE));
  	root->data=num;
  	root->left=NULL;
  	root->right=NULL;
  	return root;
  }
  if(num>root->data)
  {
  	root->right=createBST(root->right,num);
  	return root;
  }
  if(num<root->data)
  {
  	root->left=createBST(root->left,num);
  	return root;
  }
}
NODE*insertBST(NODE*root,int num)
{
	NODE *temp,*newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	newnode->left=newnode->right=NULL;
	if(root==NULL)
	 root=newnode;
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			if(num<temp->data)
			{
				if(temp->left==NULL)
				{
					temp->left=newnode;
					break;
				}
					temp=temp->left;
			}
			else
			{
				if(temp->right==NULL)
				{
					temp->right=newnode;
					break;
				}
				    temp=temp->right;
	    	}
	    }
	}
	return root;
}
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

int height(struct node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
}
void printLevelOrder(struct node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printGivenLevel(root, i);
}

int main()
{
	int n,ch,i,num;
	NODE *root=NULL;
	do
	{
	  printf("\n-----------------");
	  printf("\n1-create  \n2-insert   \n3-levelwaise \n4-exit");
	  printf("\n------------------");
	  printf("\n enter choice:");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	  	case 1:printf("\n enter limit:");
	  	       scanf("%d",&n);
	  	       for(i=0;i<n;i++)
	  	       { 
	  	         printf("enter n numbers:");
	  	         scanf("%d",&num);
	  	         root=createBST(root,num);
			   }
			   break;
		case 2:printf("enter number:");
		       scanf("%d",&num);
		       root=insertBST(root,num);
		       break;
		case 3:printLevelOrder(root);
	  }
	}while(ch!=4);
}
