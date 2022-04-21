#include<stdio.h>
void main()
{
int j,n,c,i;
//printf("n\n");
//scanf("%d",&n);

for(j=1;j<=100;j++)
{
c=0;

for(i=1;i<=j;i++)
{
if(j%i==0)
c++;
}

if(c==2)
printf("%d ",j);
}
//else 
//printf("no is not prime\n");

}

