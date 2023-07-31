#include<stdio.h>
#define max 5
struct stack
{
	int a[max];
	int top;
}s1;
 void init()
 {
 	s1.top=-1;
 	
 }
int isfull()
 {
 	if(s1.top==max-1)
 	return 1;
 	else
 	return 0;
 }
int isempty()
 {
 	if(s1.top==-1)
 	return 1;
 	else
 	return 0;
 }
void  push(int num)
 {
   if(isfull())
   {
   	printf("\n stack is full dont insert.......! \n");	
   }
   else
   {
       s1.top++;
	   s1.a[s1.top]=num;
	    printf("\n succesfully push...\n");  	
   }	
 }
 void pop()
 {
 	if(isempty())
 	{
 		printf("\n stack is empty....do not use pop..\n ");
	 }
	 else
	 {
	 	int v;
	 	v=s1.a[s1.top];
	 	s1.top--;
	 	printf("\n poped value=%d \n ",v);
	 }
 }
 void display()
 {
 	int i;
 	for(i=0;i<=s1.top;i++)
 	{
 	  printf("%d\t",s1.a[i]);	
	}
 }
 int main()
 {
 	int num,ch;
 	init();
	 
 	do
 	{
 		printf("\n 1-push \n 2-pop \n 3-display \n");
 		printf("Enter choice=");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1: printf("\n Enter number=");
 			        scanf("%d",&num);
 			        push(num);
 			        break;
 			case 2: pop();
 			       break;
 			case 3: display();
 			        break;
 			
		 }
	 }while(ch!=4);
 }