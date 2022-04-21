#include<stdio.h>
void printbainary(int);
int countsetbit(int);
void main()
{
int num,count;
printf("enter the num \n");
scanf("%d",&num);
printbainary(num);
count=countsetbit(num);

printf("\n");
printf("num of set bit=%d\n",count);
printf("\n");

if(count==1)
printf("no is power of 2\n");
else
printf("num is not power of 2\n");
printf("\n");
}
/////////////////////////////////////////////////
void printbainary(int n)
{
int pos;
for(pos=31;pos>=0;pos--)
{
printf("%d",n>>pos&1);
if(pos%8==0)
printf(" ");
}
}
////////////////////////////////////////////////
int countsetbit(int n)
{
int pos,c;
for(pos=0,c=0;pos<=31;pos++)
{
if(n>>pos&1)
c++;
}
return c;
}






