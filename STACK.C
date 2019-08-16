#include<stdio.h>
#include<conio.h>
#include<string.h>
int max=50;
void push();
void peek();
void display();
void pop();
int isempty();
int isfull();
struct student
{
 char usn[10];
 char name[25];
 char mail[30];
};
struct student s1[50];
int top=-1;
int main()
{
 int choice;
 clrscr();
 do
 {
  printf("\n ****STACK MENU****");
  printf("\n 1.push\n2.pop\n3.peek\n4.display\n5.exit");
  printf("\n Enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:push();
	  break;
   case 2:pop();
	  break;
   case 3:peek();
	  break;
   case 4:display();
	  break;
   case 5:exit(0);
	  break;
   default:exit(0);
  }
 }while(choice>-1);
 getch();
 return 0;
}
void push()
{
 if(isfull())
  printf("\n STACK OVERFLOW");
 else
 {
  top=top+1;
  printf("\n enter usn:");
  scanf("%s",&s1[top].usn);
  printf("\n enter name:");
  scanf("%s",&s1[top].name);
  printf("\n enter email:");
  scanf("%s",&s1[top].mail);
 }
}
void pop()
{
 int x;
 if(isempty())
  printf("\n STACK UNDERFLOW");
 else
 {
  x=top;
  printf("\n popped student ");
  printf("\n usn=%s",s1[x].usn);
  printf("\n name=%s",s1[x].name);
  printf("\n mail=%s",s1[x].mail);
  top=top-1;
 }
}
void display()
{
 int i;
 if(isempty())
  printf("\n STACK UNDERFLOW");
 else
 {
  printf("\n STUDENT DETAILS");
  for(i=top;i>=0;i--)
  {
   printf("\n usn=%s",s1[i].usn);
   printf("\n name=%s",s1[i].name);
   printf("\n mail=%s\n",s1[i].mail);
  }
 }
}
void peek()
{
 if(isempty())
  printf("\n STACK UNDERFLOW");
 else
  printf("\n usn=%s",s1[top].usn);
  printf("\n name=%s",s1[top].name);
  printf("\n mail=%s",s1[top].mail);
}
int isempty()
{
 if(top==-1)
  return 1;
 else
  return 0;
}
int isfull()
{
 if(top==max-1)
  return 1;
 else
  return 0;
}