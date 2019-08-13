#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

int top=-1, stack[MAX];
void push();
void pop();
void display();

void main()
{
  int ch;
  clrscr();
  printf("\n STACK MENU");
  printf("\n1.push\t2.pop\t3.display\t4.exit");
  while(ch!=4)
  {
  printf("\n Enter your choice(1-4)");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	   push();
	   break;
   case 2:
	   pop();
	   break;
   case 3:
	   display();
	   break;
   case 4:
	   exit(0);
   default:
	   printf("\n INVALID CHOICE");
  }
  }
  getch();
  return 0;
}
void push()
{
 int val;
 if(top==MAX-1)
   printf("\n ERROR:STACK OVERFLOW");
 else
 {
   printf("Enter element to push:");
   scanf("%d",&val);
   top=top+1;
   stack[top]=val;
 }
}
void pop()
{
 if(top==-1)
   printf("\n ERROR:STACK UNDERFLOW");
 else
 {
   printf("\n The popped out element is %d",stack[top]);
   top=top-1;
 }
}
void display()
{
 int i;
 if(top==-1)
   printf("ERROR:STACK IS EMPTY");
 else
 {
   printf("\n stack is \n");
   for(i=0;i<=top;i++)
     printf("%d\n",stack[i]);
 }
}

