#include<stdio.h>
#include<stdlib.h>
#define MAX 4

void enqueue();
void dequeue();
void display();

int main()
{
 int ch, *front=-1,*rear=-1,*a[MAX];
 printf("\n STACK MENU \n 1)insert 2)delete 3)display 4)exit");
 while(ch!=4)
 {
  printf("\n Enter choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:enqueue(int rear,int front,int a[MAX]);
   break;
   case 2:dequeue(int rear,int front,int a[MAX]);
   break;
   case 3:display(int rear,int front,int a[MAX]);
   break;
   case 4:exit(0);
   break;
   default:printf("\n Invalid choice");
  }
 }

 return 0;
}
void enqueue()
{
 int x;
 if(*rear==MAX-1)
  printf("\n Overflow");
 else
 {
  if(*front==-1)
   *front=0;
  printf("\n Enter element to insert");
  scanf("%d",&x);
  *rear=*rear+1;
  *a[rear]=x;
 }
}
void dequeue(int *rear,int *front,int *a[MAX])
{
 if(*front==-1||*front>*rear)
  printf("\n Underflow");
 else
 {
  printf("\n Deleted element is %d",*a[front]);
  front=front+1;
 }
}
void display(int *rear,int *front, int *a[MAX])
{
 int i;
 if(*front==-1)
  printf("\n empty");
 else
 {
  for(i=*front;i<=*rear;i++)
   printf("\n %d",a[i]);
 }
}
 
