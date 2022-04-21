#include<stdio.h>
void main()
{
int num,num1,sum,
printf("enter the number\n");
scanf("%d",&num);
for(sum=0,num1=num;num1;num1=num1/10)
{
sum=sum*10+num1%10;
}
printf("num=%d and reverc=%d\n",num,sum);
}
