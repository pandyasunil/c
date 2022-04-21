#include<stdio.h>
void main()
{
int rev,num,num1;
printf("num\n");
scanf("%d",&num);
for(num1=num,rev=0;num1;num1=num1/10)
{
rev=rev*10+num1%10;

}
printf("%d\n",rev);
}
