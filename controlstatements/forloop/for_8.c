//wap to given number is prime or not...  method 1:

#include<stdio.h>
void main()
{
	int num,c,i;
	printf("enter the num \n");
	scanf("%d",&num);

	for(i=1,c=0;i<num;i++)
		if(num%1==0)
		c++;
	if(c==2)
	printf("yes this is prime num\n");
	else
	printf("no this is not prime num\n");

}

