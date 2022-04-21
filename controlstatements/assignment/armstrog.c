#include<stdio.h>
void main()
{
	int num,s=0,r,temp;
	//printf("enter the num \n");
	//scanf("%d",&num);
	for(num=1;num<=500;num++)
	{
		for(temp=num;temp;temp=temp/10)
		{
			r=temp%10;
			s=s+(r*r*r);
		}
		if(s==num)
			printf("%d\n",num);
		//else

		//printf("not \n");
	}
}

