#include<stdio.h>
#include<stdlib.h>
struct student
{
int rollno;
char name[10];
float marks;
};
void main()
{
struct student *p;
p=malloc(sizeof(struct student));
printf("enter data \n");
scanf("%d",p->rollno);
scanf("%s",p->name);
scanf("%f",p->marks);


printf("%d %s %f",p->rollno,p->name,p->marks);
}

