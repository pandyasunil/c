#include<stdio.h>
void main()
{
int num,pos,i;

printf("enter the num \n");
scanf("%d",&num);
printf("%d \n",num);

for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");
}

printf("\n");
//printf("enter bit pos \n");
//scanf("%d",&pos);

for(pos=31;pos>=0;pos--)
{//num=num|1<<pos;
//num=num&~1<<pos;
num=num^1<<pos;}
printf("\n");
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");
}

printf("\n");
}
