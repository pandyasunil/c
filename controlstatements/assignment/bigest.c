#include<stdio.h>
void main()
{
int a,b,c;
printf("enter n1 and n2 and n3\n");
scanf("%d %d %d",&a,&b,&c);
/*if(n1>n2)
printf("n1 is big=%d",n1);
else if(n2>n3)
printf("n2 is big=%d",n2);
else
printf("n3 is biggest=%d \n",n3);*/

a>b ? (a>c?a:c):(b>c?b:c);


}
