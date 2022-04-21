#include<stdio.h>
void main()
{
int num,r,sum;
printf("enter num\n");
scanf("%d",&num);

/*for(sum=0;num;num=num/10)
{
r=num%10;
sum=sum+r;
}
printf("%d\n",sum);
}
*/
sum=0;
while(num!=0)
{
r=num%10;
sum=r;
num=num/10;
}
printf("%d\n",sum);
}


