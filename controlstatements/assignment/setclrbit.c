#include<stdio.h>
void main()
{
int num,pos;
printf("enter num \n");
scanf("%d",&num);
printf("enter pos \n");
scanf("%d",&pos);
//num=num|1<<pos; //set pos
num=num&~(1<<pos);//clr pos


printf("binary of that num \n");
for(pos=31;pos>=0;pos--)
printf("%d ",num>>pos&1);
printf("\n");
}
