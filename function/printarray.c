#include<stdio.h>
void printarray(int *,int);
void bubblesort(int *,int);
void main()
{
	int a[5]={10,2,500,600,20},ele;
	ele=sizeof(a)/sizeof(a[0]);
	printarray(a,ele);
	bubblesort(a,ele);
	printarray(a,ele);

}
void printarray(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)

		printf("%d ",p[i]);
	printf("\n");

	//for(i=0;i<n;i++)
	//printf("%d ",*p++);


	//printf("\n");
}
void bubblesort(int *p,int ele)
{
int i,j,t;

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}

		}
	}
}












