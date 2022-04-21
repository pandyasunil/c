#include<stdio.h>
void main ()
{
int i,num,num1,t,s,r;

printf("enter num strong\n");
scanf("%d",&num);
for (i=1;i<=num;i++){
for(s=0,num1=i;num1;num1=num1/10)
{
r=num1%10;
for(r,t=1;r>=1;r--)
t=r*t;
s=s+t;
}
if(i==s)
printf("%d strong\n",i);}
//else
//printf("%d not strong\n",num);

}
