#include<stdio.h>
#include<math.h>
int sunil(int r,int c);
void main ()
{
	int j,s,n,num,num1,r,c=0,c1=0;
	printf("enter range\t");
	scanf("%d",&num);
	int num2=num;
	while(num2>0)
	{
		num2=num2/10;
		c++;
	}
//	printf("%d\n",c);
n=c;

for(j=1;j<=num;j++)
{
	for(s=0,num1=j;num1>0;num1=num1/10)
{
		r=num1%10;
		s=s+sunil(4,3);
	}
//printf("%d=s",s);

	if(s==j){
c1++;
printf("%d\n",s);
}

}
printf("\n");
}
int sunil(int r,int c)
{
int q=1,i;
for(i=1;i<=c;i++){
q=q*r;}
printf("%d\n",q);
return q;
}

