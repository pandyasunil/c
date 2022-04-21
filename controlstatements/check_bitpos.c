#include<stdio.h>
void main()
{
	int num,pos,r;
	printf("enter the number..\n");
	scanf("%d",&num);
	printf("enter the bit pos..\n");
	scanf("%d",&pos);
	r=num&1<<pos?printf("set\n"):printf("clear\n");
	//printf("r=%d...\n",r);
}


	
