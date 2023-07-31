#include<stdio.h>
#include<ctype.h>
#define MAX 5
struct stack
{
    char a[MAX];
    int  top;
}s1;
void init()
{
    s1.top=-1;
}
int isempty()
{
    if(s1.top==-1)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int isfull()
{   if(s1.top==MAX-1)
    {
        return 1;
    }    
    else{
        return 0;
    }
}
void push(char k)
{
    if(isfull())
    {
        printf("Stack is Full");
    }
    else
    {
        s1.top++;
        s1.a[s1.top]=k;

    }
}
char pop()
{
    char ch;
    if(isempty())
    {
        printf("stack is Empty");

    }
    else{
        ch=s1.a[s1.top];
        s1.top--;
        return ch;
    }
}
int priority(char k)
{
    if(k=='(')
     return 0;
    if(k=='+'||k=='-')
     return 1;
    if(k=='*'||k=='/')
     return 2;

}
int main()
{
    int i,j=0;
    char s[100],postfix[100],c;
    printf("Enter The Infix Experssion:");
    gets(s);
    init();
    for(i=0;s[i]!='\0';i++)
    {
        if(isalnum(s[i]))
         postfix[j++]=s[i];
        else if(s[i]=='(')
         push(s[i]);
        else if(s[i]==')')
        {
            while(c=pop()!='(')
             postfix[j++]=c;

        } 
        else
        {
            while(priority(s1.a[s1.top])>= priority(s[i]))
            postfix[j++]=pop();
            push(s[i]);
        } 
    }
    while(!isempty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';//postfix string end..
    printf("Postfix Experssion=%s",postfix);
}