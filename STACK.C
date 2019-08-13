#include<stdio.h>
#include<conio.h>
#define max_size 10
int item[max_size];
int top=-1;
int x;
void push(int x)
{
 printf("enter a value for x");
 scanf("%d",&x);
 if (isfull())
   printf("error:stack full");
 else
   x=item[++top];
   printf("%d",x);
}
void pop()
{
 if(isempty())
   printf("error:stack empty");
 else
   top--;
}void display()
{
 int i;
 printf("stack");
 for(i=0;i<=max_size;i++)
 {
  printf("%d",i);
  printf("\n");
 }
}
int isfull()
{
 if(top==max_size)
   return 1;
 else
   return 0;
}
int isempty()
{
 if(top==-1)
   return 1;
 else
   return 0;
}
int main()
{
 int choice;
 printf("enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 push(x);
 break;
 case 2:
 pop();
 break;
 case 3:
 display();
 break;
 default:
 exit();
}
getch();
return 0;
}