#include<stdio.h>
void main()
{
char *cp;
float num=23.5;
int pos,*ip;
cp=(char*)&num;
ip=(int*)&num;

for(pos=31;pos>=0;pos--)
//printf("%d",*cp>>pos&1);
printf("%d ",*ip>>pos&1);
printf("\n");

}
