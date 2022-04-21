#include<stdio.h>
void main()
{
unsigned int n=0x1234,n1,n2,n3,n4;
//printf("enter num \n");
//scanf("%d ",&n);
printf("%x \n",n);

n1=n&0x000f;
n2=n&0xf000;
n3=n&0x0f00;
n4=n&0x00f0;

//n3=n&0x0f00;
//n4=n&0xf000;

n1=n1<<12;
n2=n2>>12;
//n3=n3>>4;
//n4=n4>>12;
n=n1|n2|n3|n4;

printf("%x ",n);
printf("\n");

}


