#include<stdio.h>
void swap(int *,int *);
void main()
{
int n1,n2;
printf("enter the n1 and n2 \n");
scanf("%d%d",&n1,&n2);
swap(&n1,&n2);
printf("n1=%d n2=%d",n1,n2);
}
void swap(int *p,int *q)
{
int t;

t=*p;
*p=*q;
*q=t;
//printf("n1=%d n2=%d",n1,n2);
}



