#include<stdio.h>
void main()
{
	int i,j,k;
	scanf("%d %d %d",&i,&j,&k);

	if(i>j&&i>k)
		printf("i\n");
	else if(j>i&&j>k)
		printf("j\n");
	else
		printf("k\n");

}
