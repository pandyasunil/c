#include<stdio.h>
void main()
{
int num;
printf("enter the num\n");
scanf("%d",&num);
if((num&num-1)==0)
printf("num is power of 2=%d\n",num);
else
printf("no is not power of 2=%d\n",num);
}

