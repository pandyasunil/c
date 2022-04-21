#include<stdio.h>
struct student
{
int rollno;
char name[10];
float marks;
};

void main()
{
struct student s[2],*p;
p=&s;
int i,ele;
ele=sizeof(s)/sizeof(s[0]);
for(i=0;i<ele;i++)
scanf("%d%s%f",p->rollno,p->name,p->marks);

for(i=0;i<ele;i++)
printf("%d %s %f \n",p->rollno,p->name,p->marks);
}

