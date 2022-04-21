#include<stdio.h>
void main()
{
int x,y,i,a;
scanf("%d%d",&x,&y);
for(i=0,a=1;i<y;i++)
a=a*x;
printf("%d^%d=%d\n",x,y,a);

}
