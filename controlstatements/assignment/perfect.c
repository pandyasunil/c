#include<stdio.h>
void main()
{
int num,num1,r,sum=0;
printf("enter the num \n");
printf("%d",&num1);


for(num=num1,num;num=num/10)
{
r=num%10;
sum=sum+r;
if(num==sum)
printf("no is perfect=%d\n",sum);
}
}


