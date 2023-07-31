#include<stdio.h>   
#define max 30 
typedef struct stack 
{ 
  char items[max]; 
  int top;
}STACK; 
void initstack(STACK*ps) 
{ 
  ps->top=-1; 
  
}   
 int isFull(STACK*ps)  
 { 
   if(ps->top==max-1)  
    return 1; 
    else 
     return 0; 
 } 
 void push(STACK*ps,char k) 
 { 
   if(isFull(ps))  
   { 
     printf("stack is full or overflow"); 
      
   } 
   else 
   { 
     ps->top++; 
     ps->items[ps->top]=k;
   }
 }
 void print(STACK*ps) 
 {   
    int i;  
    for(i=ps->top;i>=0;i--) 
    { 
      printf("\n %c",ps->items[i]);
	}
 } 
 int main()  
 { 
     char s[100]; 
     int i; 
     printf("\n enter string:"); 
     gets(s);
   STACK s1;  
   initstack(&s1); 
   for(i=0;s[i]!='\0';i++) 
   push(s[i]); 
   printf("\n reverse string:"); 
   print(&s1); 
}