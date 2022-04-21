#include<stdio.h>
void main()
{
	char ch='a';
	int i=10;
	float f=23.5;

	printf("%ld %ld %ld \n",sizeof(float),sizeof(f),sizeof(23.5));

	printf("%ld %ld %ld \n",sizeof(int),sizeof(i),sizeof(10));

	printf("%ld %ld %ld \n",sizeof(char),sizeof(ch),sizeof('a'));

	printf("%ld \n",sizeof("sunil"));

}

