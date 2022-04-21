#include<stdio.h>
void main()
{
	int pos,num,c;
	printf("enter num \n");
	scanf("%d",&num);

	pos=0;
	c=0;
	while(pos<31)	
	{
	if(num&1<<pos)
	c++;
	pos++;

	}
	printf("set bits=%d \n",c);
	printf("clear bits=%d \n",32-c);
	
}
