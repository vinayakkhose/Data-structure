#include<stdio.h>
#define MAX 100
struct stack
{
    int a[MAX];
    int top;
} s;
void init()
{
    s.top==-1;
}
int isempty()
{
    if(s.top==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(s.top==MAX-1)
        return 1;
    else
        return 0;
}
void push(int x)
{
    if(isfull())
        printf("stack is full dont push");
    else
    {
        s.top++;
        s.a[s.top]=x;
    }
}
char pop()
{
    char ch;
    if(isempty())
        return -1;
    else
    {
        ch=s.a[s.top];
        s.top--;
        return ch;
    }
}

int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    return 0;
}
int main()
{
    int i,j=0;
    char postfix[100],ch,s1[100];
    printf("enter infix expression:");
    gets(s1);
    init();
    for(i=0;s1[i]!='\0'; i++)
    {
        if(isalnum(s1[i]))
            postfix[j++]=s1[i];
        else if(s1[i]=='(')
            push(s1[i]);
        else if(s1[i]==')')
        {
            while(ch=pop()!='(')
                postfix[j++]=ch;
        }
        else
            while(priority (s.a[s.top])>=priority(s1[i]))
            postfix[j++]=pop();
                push(s1[i]);
    }
while(!isempty())
{
    postfix[j++]=pop();
}
postfix[j]='\0';
printf("postfix expression=%s",postfix);
}
