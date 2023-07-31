#include<stdio.h>
#include<stdlib.h>
#define MAX 20
typedef struct stack
{
	int items[MAX];
	int top;
}STACK;
void initstack(STACK *PS)
{
	PS->top=-1;
}
int isFull(STACK *PS)
{
	if(PS->top==MAX-1)
	  return 1;
	else
	  return 0;  
}
int isEmpty(STACK *PS)
{
	if(PS->top==-1)
	  return 1;
	else
	  return 0;  
}
void push(STACK *PS,int n)
{
	if((isFull(PS)))
	  printf("stack is overflow");
	else
	{
	 PS->top++;
	 PS->items[PS->top]=n; 
    }
}
int pop(STACK *PS)
{
    int x;
	if(isEmpty(PS))
	  printf("stack is underflow");
	else
	{
	 x=PS->items[PS->top]; 
	 PS->top--;
	 return x;
    }
}
int evelpost(char p[])
{
    STACK s1;
	initstack(&s1);
	
	int op1,op2,r,i=0;
	while(i<strlen(p))
	{
		switch(p[i])
		{
			case '0':push(&s1,0);
			         break;
			case '1':push(&s1,1);
			         break; 
			case '2':push(&s1,2);
			         break; 
		    case '3':push(&s1,3);
			         break;	
			case '4':push(&s1,4);
			         break;	
			case '5':push(&s1,5);
			         break;
			case '6':push(&s1,6);
			         break;	
			case '7':push(&s1,7);
			         break;	
			case '8':push(&s1,8);
			         break;
			case '9':push(&s1,9);
			         break;	
			case '+':op1=pop(&s1);
			         op2=pop(&s1);
					 r=op1+op2;
					 push(&s1,r);
					 break;
			case '-':op1=pop(&s1);
			         op2=pop(&s1);
					 r=op1-op2;
					 push(&s1,r);
					 break;
			case '/':op1=pop(&s1);
			         op2=pop(&s1);
					 r=op1/op2;
					 push(&s1,r);
					 break;	
			case '%':op1=pop(&s1);
			         op2=pop(&s1);
					 r=op1%op2;
					 push(&s1,r);
					 break;			 		 		 		 	 		 	 	 		 	 		        
		}
		i++;
	}
	r=pop(&s1);
  return r;	
}
void main()
{
	char p[10];
	int r;
	
	printf("\n enter postfix exp:");
	scanf("%s",p);
	r=evelpost(p);
	printf("\n %d",r);
}
