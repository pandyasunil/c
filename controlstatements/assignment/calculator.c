#include<stdio.h>
void main()
{
int n1,n2,n3;
char op;
printf("enter the num n1 n2 n3 \n");
scanf("%d %d  \n",&n1,&n2);

printf("enter op= +,-,*,/\n");
scanf(" %c",&op);

switch(op)
{

case '+': n3=n1+n2;
 	printf("%d",n3);
	printf("\n");
	break;

case'-': n3=n2-n1;
 	printf("%d",n3);
	printf("\n");
	break;

case'*':n3=n1*n2;

 	printf("%d",n3);
	printf("\n");
	break;

case'/':n3=n1/n2;
 	printf("%d",n3);
	printf("\n");
	break;

default:
printf("unkown\n");
}

}
