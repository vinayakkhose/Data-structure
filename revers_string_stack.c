#include<stdio.h>
#define max 100
struct stack
{
	char a[max];
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
int push(char ch)
 {
 	if(isfull())
 	printf("stack is full....!");
 	else
 	{
 		s1.top++;
 		s1.a[s1.top]=ch;
	 }
 }
void display()
 {
 	int i;
 	for(i=s1.top;i>=0;i--)
 	{
 	    printf("%c",s1.a[i]);	
	}
 }
 int main()
 {
 	char s[100];
 	int i;
 	printf("Enter string=");
 	gets(s);
 	init();
 	for(i=0;i<s[i]!='\0';i++)
 	{
 		push(s[i]);
	 }
	 printf("revers string=");
	 display();
 }