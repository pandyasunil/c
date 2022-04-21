#include<stdio.h>
void main()
{
        int num,s,r,num1;

	printf("enter the number \n");
	scanf("%d",&num);
	for(s=0,num1=num;num1;num1=num1/10)

		s=s*10+num1%10; //for rotate the num from 123 to 321
/*{
		r=num1%10;// for add of the number 1+2+3
		s=s+r;
	}*/
	printf("the num=%d and sum of the digit=%d\n",num,s);

}
