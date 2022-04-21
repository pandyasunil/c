#include<stdio.h>
void main()
{
	int m;
	printf("enter m\n");
	scanf("%d",&m);
/*
	if(m<40)
f:	printf("fail\n");
	else if (m<60)
		printf("c\n");
	else if (m<75)
		printf("b\n");
	else if (m<=100)
		printf("a\n");
	else 
		goto f;

*/

	if(m<11)
	{
		if(m<21)
		{
			if(m<31)
			printf("40\n");
			else
			printf("30\n");
		}
		else
		printf("20\n");
	}
	else
	printf("10\n");



}

