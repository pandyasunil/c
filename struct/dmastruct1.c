#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char name[20];
float marks;
};
void main()
{
struct st *p[2];
int i;
for(i=0;i<2;i++)
p[i]=malloc(sizeof(struct st));
for(i=0;i<2;i++)
scanf("%d%s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);
for(i=0;i<2;i++)
printf("%d %s %f",p[i]->rollno,p[i]->name,p[i]->marks);
}
