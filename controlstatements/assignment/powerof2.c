#include<stdio.h>
void main()
{
int num;
printf("enter num \n");
scanf("%d",&num);
num&num-1?printf("no\n"):printf("yes %d",num);
/*if((num&num-1)==0)
{
printf("num=%d is po of 2 \n",num);
}
else
{
printf("num=%d is not po 2\n",num);
}*/
}


