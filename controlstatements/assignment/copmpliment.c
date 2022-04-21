#include<stdio.h>
void main()
{

int num=10,pos;
for(pos=31;pos>=0;pos--)
printf("%d ",num>>pos&1);
printf("\n");
//num=-(num+1); //formula for 1s compliment
num=-(num);   //formula for 2s compliment 
for(pos=31;pos>=0;pos--)
printf("%d ",num>>pos&1);
printf("\n");
printf("hexa=%x\n",num);
printf("\n");
printf("octal=%o\n",num);
printf("\n");
printf("decimal=%d\n",num);
printf("\n");
}
