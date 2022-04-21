//wap to revers the bit of given number


#include<stdio.h>
void main()
{

        int num,m,n,i,j,pos;
	printf("enter the num \n");
	scanf("%d",&num);
	printf("before the reverse bit num=%d\n",num);

	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");

	for(i=0,j=31;i<j;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
		printf("after reverse bit num=%d \n",num);
		for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
		printf("\n");


}
