#include<stdio.h>
void main()
{
int r,num,pos;
printf("enter the num \n");
scanf("%d",&num);
printf("enter the pos \n");
scanf("%d",&pos);
r=num&1<<pos?printf("set \n"):printf("clr \n"); //check bit pos that given by user
num=num^1<<pos; //compliment bit pos that given by user
printf("after toggle bit pos\n");
r=num&1<<pos?printf("set \n"):printf("clr \n");//after toggle check bit pos

printf("binary of given num\n");//print num into binary formate
for(pos=31;pos>=0;pos--)
printf("%d ",num>>pos&1);
printf("\n");


}
