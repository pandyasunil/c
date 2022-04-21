#include<stdio.h>
void main()
{
int j,num,i,c;
printf("enter rane\t");
scanf("%d",&num);
for(c=0,j=2;j<=num;j++){
for(i=2;i<=j;i++){
if(j%i==0)
break;}
if(j==i){
c++;
printf("%d ",j);}}
printf("\n%d is total prime\n",c);

}
