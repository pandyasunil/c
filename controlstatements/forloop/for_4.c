#include<stdio.h>
void main()
{
        int num,pos,c;
	printf("enter the number\n");
	scanf("%d",&num);
	
	for(pos=0,c=0;pos<=31;pos++)
	if(num&1<<pos)
	c++;

	printf("the no. of bits set=%d\n",c);
	printf("the no. of bits clear=%d\n",32-c);

}
