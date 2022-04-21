#include<stdio.h>
#include<string.h>

struct student 
{
	int rollno;
	char name[10];
	float marks;
};
void main()
{
	struct student s[2];
	int i,ele,j,op,t;
	ele=sizeof(s)/sizeof(s[0]);
	for(i=0;i<ele;i++)
	{
		printf("enter student roll no \n");
		scanf("%d",&s[i].rollno);
		printf("enter student name \n");
		scanf("%s",s[i].name);
		printf("enter student marks \n");
		scanf("%f",&s[i].marks);
	}

	for(i=0;i<ele;i++)
		printf("%d %s %f \n",s[i].rollno,s[i].name,s[i].marks);

	printf("select option for sorting data \n");
	printf("op1)rollno wise,op2)name wise,op3)marks wise \n");
	scanf("%d",&op);
	if(op==1)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(s[j].rollno>s[j+1].rollno)
				{
					t=s[j].rollno;
					s[j].rollno=s[j+1].rollno;
					s[j+1].rollno=t;
				}
			}
		}
	}

	if(op==2)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
		
				if(strcmp(s[j].name),(s[j+1].name)>1);
				{
					strcpy(t,s[j].name);
					strcpy(s[j].name,s[j+1].name);
					strcpy(s[j+1].name,t);
				}
			}
		}
	}





	if(op==3)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(s[j].marks>s[j+1].marks)
				{
					t=s[j].marks;
					s[j].marks=s[j+1].marks;
					s[j+1].marks=t;
				}
			}
		}
	}
	for(i=0;i<ele;i++)
		printf("%d %s %f \n",s[i].rollno,s[i].name,s[i].marks);

}

