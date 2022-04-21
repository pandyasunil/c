#include<stdio.h>
void main()
{
int i=10,j=20;
i=i^j;
j=i^j;
i=i^j;

printf("%d %d \n",i,j);
}
