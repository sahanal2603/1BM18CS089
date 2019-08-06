#include<stdio.h>
#include<conio.h>
int main()
{
  struct marks
  {
   int m1;
   int m2;
   int m3;
  };
  struct student
  {
   char id[10];
   char name[20];
   struct marks m;
   }s1;
  clrscr();
  printf("\n enter student name");
  scanf("%s",s1);
  printf("\n enter student name");
  scanf("%s",s1);
  printf("enter marks");
  scanf("%d%d%d",&m.s1.m1,&m.s1.m2,&m.s1.m3);
  printf("\n\n student information");
  printf("\n id:%s",s1);
  printf("\n name:%s",s1);
  printf("\n marks in subject 1:%d",m.s1.m1);
  printf("\n marks in subject 2:%d",m.s1.m2);
  printf("\n marks in subject 3:%d",m.s1.m2);
  getch();
  return 0;
  }
