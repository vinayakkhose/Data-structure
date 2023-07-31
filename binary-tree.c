#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*left,*right;
}tnode;
tnode *insert(tnode*tree,int num)
{
    if(tree==NULL)
    {
        tree=(tnode*)malloc (sizeof(tnode));
        tree->data=num;
        tree->left=NULL;
        tree->right=NULL;
        return tree;
    }
    if(tree->left==NULL)
    {
        tree->right=insert(tree->right,num);
        return tree;
    }
    if(tree->right==NULL)
    {
        tree->left=insert(tree->left,num);
        return tree;
    }
 }
 void inorder(tnode *tree)
{
	if(tree==NULL)
    {
	inorder(tree->left);
	printf("%d\t",tree->data);
	inorder(tree->right);
    }
}
void main()
{
	tnode *tree=NULL;
	int num,ch,i,n;
	do
	{
		printf("\n 1-create \n2-display");
		printf("\n enter choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n enter number of roots=");
			        scanf("%d",&n);
			        for(i=0;i<n;i++)
			        {
			        	printf("enter root data=");
			        	scanf("%d",&num);
			        	tree=insert(tree,num);
					}
					break;
					case 2:inorder(tree);
		}
	}while(ch!=3);
}