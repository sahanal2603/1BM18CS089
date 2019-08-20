
#include<stdio.h>
#include<stdlib.h>
#define size 200
char stack[size];
int top=-1;

void push(char k)
{
 if(top>=size-1)
  printf("\n STACK OVERFLOW");
 else
 {
  top=top+1;
  stack[top]=k;
 }
}

char pop()
{
 char k;
 k=stack[top];
 top--;
 return (k);
}

int operator(char s)
{
 if(s=='^'||s=='*'||s=='/'||s=='+'||s=='-')
  return 1;
 else 
  return 0;
}

int precedence(char s)
{
 if(s=='^')
  return 3;
 else if(s=='*'||s=='/')
  return 2;
 else if(s=='+'||s=='-')
  return 1;
 else 
  return 0;
}

int main()
{
 char infix[size],postfix[size],k,temp;
 int i=0,j=0;
 printf("\n Enter an infix arithmetic expression");
 for(i=0;i<=size;i++)
  scanf("%s",infix[i]);
 while(infix[i]!='\0')
 {
  k=infix[i];
  if(k=='(')
   push(k);
  else if(k>='A'&& k<='Z'|| k>='a'&& k<='z')
  {
   postfix[j]=k;
   j++;
  }
  else if(operator(k)==1)
  {
   temp=pop();
   while(operator(temp)==1 && precedence(temp)>=precedence(k))
   {
    postfix[j]=temp;
    j++;
    temp=pop();
   }
   push(temp);
   push(k);
  }
  else if(k==')')
  {
   temp=pop();
   while(temp!='(')
   {
    postfix[j]=temp;
    j++;
    temp=pop();
   }
  }
  else
  {
   printf("\n Invalid arithmetic expression");
  }
  i++;
 }
 while(top>-1)
 {
  postfix[j]=pop();
  j++;
 }
 postfix[j]='\0';
 printf("\n The arithmetic expression in postfix is: ");
  printf("%s",postfix);
 return 0;
}


