#include<stdio.h>
void main ()
{
int a,s,i,t1=0,t2=1,t3;
printf("%d %d ",t1,t2);
for(t1=0,t2=1,i=0;i<=50;i++){
t3=t1+t2;
printf("%d ",t3);
t1=t2;t2=t3;
}

printf("\n");



}
