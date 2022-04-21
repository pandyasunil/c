#include<stdio.h>
void main()
{
int num,pos,pos1,k;

printf("enter num \n");
scanf("%d",&num);

printf("enter the pos \n");
scanf("%d",&pos);

for(pos=31;pos>=0;pos--)
printf("%d ",num>>pos&1);

printf("%d %d \n",num,pos);

num=num>>pos;
//num=num<<pos;
printf("%d \n",num);

for(pos=31;pos>=0;pos--)
printf("%d ",num>>pos&1);

}


