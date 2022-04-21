#include<stdio.h>
void main()
{
int num,pos,r;
printf("num \n");
scanf("%d",&num);
printf("pos \n");
scanf("%d",&pos);

r=num&1<<pos?printf("clr \n"):printf("set \n");
printf("%d\n",r);



}
