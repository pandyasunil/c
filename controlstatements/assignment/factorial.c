#include<stdio.h>
void main()
{
int i,n,fact=1,c,j;
printf("num\n");
scanf("%ld",&n);

for(i=1;i<=n;i++) 
{
fact=fact*i;
}
printf("%ld\n",fact);
} 
