//wap for generic scan the number from the user
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("n\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	for(j=0;j<(n-i);j++)
	printf("* ");
	printf("\n");
	}


}

