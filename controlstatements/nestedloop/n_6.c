#include<stdio.h>
void main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)//for(i=0;i<5;i++)//for(i=0,ch='a';i<5;i++,ch++)
	{
		for(j=5,ch='a';j>=i;j--,ch++)//for(j=0,ch='a';j<=i;ch++,j++)//for(j=0;j<=i;j++)
		printf(" %c ",ch);
                printf("\n");

}


}









