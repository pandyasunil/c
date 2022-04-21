#include<stdio.h>
struct student 
{
int rollno;
char name[10];
float marks;
};
void main()
{
struct student st;
printf("enter student roll no \n");
scanf("%d",&st.rollno);
printf("enter student name \n");
scanf("%s",st.name);
printf("enter student marks \n");
scanf("%f",&st.marks);

printf("%d %s %f \n",st.rollno,st.name,st.marks);
}

