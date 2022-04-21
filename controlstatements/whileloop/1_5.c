#include<stdio.h>
void main()
{
	int num,s,r,num1;
	printf("enter the number \n");
	scanf("%d",&num);

	s=0;
	num1=num;
	while(num1)	
	{
	r=num1%10;
	s=s+r;		
	num1=num1/10;
	}
	printf("the num=%d and sum of digit=%d \n",num,s);
}


