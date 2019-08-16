#include<stdio.h>
#include<conio.h>
#define MAX 10
int item[MAX];
int top;
void push()
{
 int val;
 if(top==MAX)
  printf("error:stack overflow\n");
 else
 {
  printf("enter value");
  scanf("%d",&val);
  item[++top]=val;
 }
}
void pop()
{
 if(top==-1)
  printf("error:stack underflow\n");
 else
 {
  printf("The popped out item is %d",item[top]);
  top=top-1;
 }
}
void display()
{
 int i;
 if(top==-1)
   printf("empty stack");
 else
 {
  printf("the new stack is");
  for(i=0;i<=top;i++)
   printf("%d \n",item[i]);
 }
}
int main()
{
 int choice,j;
 int top=-1;
 clrscr();
 printf("\n enter stack elements:");
 for(j=0;j<=5;j++)
  scanf("%d",&item[j]);
 printf("enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
	  push(item[top]);
	  break;
  case 2:
	  pop();
	  break;
  case 3:
	  display();
	  break;
  case 4:
	  exit();
	  break;
  default:
	  printf("enter a valid choice");

 }
 getch();
 return 0;
}
