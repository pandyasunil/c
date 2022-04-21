#include<stdio.h>
void main()
{
	int num,pos;
	printf("enter the number..\n");
	scanf("%d",&num);
	printf("enter the position...\n");
	scanf("%d",&pos);
	printf("before num=%d..\n",num);
	//num=num|1<<pos; //to set bit
	//num=num &~1<<pos; //to clear bit
	num=num^1<<pos;  //to compliment bit
	printf("after num=%d..\n",num);


}


