//wap to print binary formate of num btw 10 to 20.....
#include<stdio.h>
void main()
{

        int pos,num;
	for(num=10;num<=20;num++)
	{
		for(pos=31;pos>=0;pos--)  //for print binary of that number
                {
		printf("%d",num>>pos&1);//show how many bit set in that binary
               
	       	if(pos%8==0) //to create space btw one byte binary number
		printf(" ");
		}	
	
	printf("%d\n",num);
	}
}

