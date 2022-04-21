#include<stdio.h>

void main ()
{
   long	int num,num1,s,r,c,j;
	printf("enter num\t");
	scanf("%d",&num);
	for(c=0,j=1;j<=num;j++)
{
		for(s=0,num1=num;num1;num1=num1/10)
		{
			r=num1%10;
			s=s+r*r*r;
		}
		if(num==s){c++;
			printf("%ld ",num);}
	printf("in range of %ld total  armstrong num are % ld\n",num,c);
}}
