
//wap to display multipication table of any number
#include<stdio.h>
void main()
{
        int i=1,num;
	printf("enter any number \n");
	scanf("%d",&num);
l1:
        printf("%d*%d=%d \n",num,i,num*i);
	i++;
	if(i<=10)
	goto l1;


}


