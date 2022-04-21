#include<stdio.h>
#include<string.h>
void main(int argc,char ** argv)
{
int l;
	if(argc<2)
	{
	printf("usage : wrong input \n");
	return;
	}
l=strlen(argv[1]);
printf("%d\n",l);
}


