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
  };
  struct student s1;
  clrscr();
  printf("\n Enter the student id: ");
  scanf("%s",s1.id);
  printf("\n Enter student name: ");
  scanf("%s",s1.name);
  printf("\n Enter marks in 3 subjects: ");
  scanf("%d%d%d",&s1.m.m1,&s1.m.m2,&s1.m.m3);
  printf("\n\n ***STUDENT INFORMATION***");
  printf("\n STUDENT ID:%s",s1.id);
  printf("\n STUDENT NAME:%s",s1.name);
  printf("\n M1=%d\n M2=%d\n M3=%d",s1.m.m1,s1.m.m2,s1.m.m3);
  getch();
  return 0;
}