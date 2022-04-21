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
struct st **p;
int n,i;
printf("enter value of N \n");
scanf("%d",&n);
p=malloc(sizeof(struct st *)*n);
ele=sizeof(n)/sizeof(n(0));
for(i=0;i<ele;i++)
p[i]=malloc(sizeof(struct st));
printf("enter roll name and marks \n");
for(i=0;i<ele;i++)
scanf("%d%s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);
for(i=0;i<ele;i++)
printf("%d %s %f",p[i]->rollno,p[i]->name,p[i]->marks);
printf("\n");
}
