#include<stdio.h>
void main()
{
	int num,s,num1;
	printf("enter num \n");
	scanf("%d",&num);

	s=0;
	num1=num;
	while(num1)
	{
		s=s*10+num1%10;
		num1=num1/10;
	}
	printf("the num=%d and reverce num=%d \n",num,s);
}

