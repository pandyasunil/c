#include<stdio.h>
int pow(int r,int c)
void main ()
{
	int j,s,n,num,num1,r,c=0;
	printf("enter range\t");
	scanf("%d",&num);
	int num2=num;
	int c=0;
	while(num>0)
	{
		num=num/10;
		c++;
	}
//	printf("%d\n",c);
n=c;

for(j=1;j<=num;j++){
	for(s=0,num1=j;num1;num1=num1/10){
		r=num1%10;
		s=s+pow(r,c);
	}
	if(s==j)

		printf("arm");
	else
		printf("not arm");

}
printf("\n");
}
int pow(int r,int c)
{
int q=1;
for(i=1;i<=c;i++){
q=q*r;}
return q;
//printf("%d",q)
}

