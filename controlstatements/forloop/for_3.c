//wap to print binary formate of given number....
//input :- any number
//output:- 32 bit binary of that number..

#include<stdio.h>
void main()
{


        int pos,num;
	printf("enter the any number  \n");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
	printf("%d",num>>pos&1);
	if(pos%8==0)
	printf(" ");
	}
	printf("\n");

}

