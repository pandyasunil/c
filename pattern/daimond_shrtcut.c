#include<stdio.h>
void main()
{

	int i,j,k,n;
printf("n=");
scanf("n=%d\n",&n);

	for(i=-n;i<=n;i++)
	{
		k=i;
		if(k<0)
			k=-n;
		for(j=0;j<=n-k;j++)
		{
			if(j<k)
				printf(" ");
			else
				printf("* ");
		}
		printf("\n");
	}
}









