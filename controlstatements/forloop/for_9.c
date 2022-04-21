//wap to given number is prime or not...  method 2:

#include<stdio.h>
void main()
{
	int num,c,i;
	printf("enter the num \n");
	scanf("%d",&num);

	for(i=2,c=0;i<num;i++)
		if(num%i==0)
		c++;
	if(c==0)
	printf("yes this is prime num\n");
	else
	printf("no this is not prime num\n");

}

