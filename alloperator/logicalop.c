#include<stdio.h>
void main()
{

int i=10,j=20,k;
k=i&&j;
printf("k=%d\n",k);
k=i||j;
printf("k=%d\n",k);
k=!i;
k=i&&(j=50);
printf("k=%d\n",k);
k=i+j*2;

printf("i=%d j=%d k=%d\n",i,j,k);

//printf("k=%d\n",k);
}

