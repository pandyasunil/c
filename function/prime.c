#include<stdio.h>
int prime(int);
void main()
{
int num,r;
scanf("%d",&num);
r=prime(num);
if(r==1)
printf("prime\n");
else
printf("not prime \n");
}
int prime(int n)
{
int r,i;
for(i=1;n;i++)
{
if(n%i==0)
return 1;
else 
return 0;
}



