#include<stdio.h>
void main()
{
	char ch;
	printf("enter the one char \n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	printf("lower\n");
        else if(ch>='A'&&ch<='Z')
	printf("upper\n");	
	else  if(ch>='0'&&ch<='9')
	printf("digit\n");
	else 
	printf("spl char\n");
}	

