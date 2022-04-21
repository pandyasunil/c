// wap to print peime number btw 50 to1 100 by using 3rd method....

#include<stdio.h>
void main()
{

        int num,i,c;


	for(num=50,c=0;num<=100;num++)
	{
		for(i=2;i<num;i++) //for finding prime number
		{
			if(num%i==0)  //if reminder is 0 then it is prime number
			break;
		}
	if(num==i)
	{printf("%d\n",num);
	c++;
	}
	}
}	

