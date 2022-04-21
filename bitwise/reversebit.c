#include<stdio.h>
void main()
{
int num=15,i,j;
for(i=0,j=31;i<j;i++,j--)
{
printf("%d",num>>i&1);

}
printf("\n");
}
