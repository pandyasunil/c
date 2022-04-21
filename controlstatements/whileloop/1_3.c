#include<stdio.h>
void main()
{
	int num,i;
	printf("enter num \n");
	scanf("%d",&num);

	i=1;
	while(i<=10)
	{
		printf("%d*%d=%d\n",num,i,num*i);
		i++;
	}



}

