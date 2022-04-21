#include<stdio.h>
void main()
{
int ch,a;
printf("num=,positon=\n");
scanf("%d%d",&ch,&a);
ch=ch>>a;
printf("shift=%d",ch);
}
