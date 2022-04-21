#include<stdio.h>
void main()
{
int a,b;
printf("enter the two num \n");
scanf("%d%d",&a,&b);
printf("a=%d b= %d \n",a,b);
{a=a^b;
b=a^b;
a=a^b;
}
printf("a=%d b=%d \n",a,b);
}
