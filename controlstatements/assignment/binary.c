#include<stdio.h>
void main()
{
int num=-2,pos;
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");

}
printf("\n");

}

