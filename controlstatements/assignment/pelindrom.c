#include<stdio.h>
void main()
{
int num,num1,r,reverse=0,i,min,max;

printf("num \n");
scanf("%d",&num);

for(num1=num;num;num=num/10)
{
r=num%10;

reverse=reverse*10+r;
}
reverse==num1?printf("yes it is pelendrom\n"):printf("no it is not pelendrom \n");
/*
if(r==num1)
printf("num is pelendrome \n");
else
printf("num is not pelendrome\n");
*/

printf("\n");
}




