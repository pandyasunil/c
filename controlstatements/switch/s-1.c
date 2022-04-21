#include<stdio.h>
void main()
	/*
	   {
	   char ch;
	   printf("enter ch \n");
	   scanf("%c",&ch);
	   switch(ch)
	   {
	   case 'a': 
	   case 'e':
	   case 'i':
	   case 'o':
	   case 'u':

	   printf("char is vowel \n");
	   break;
	   default:
	   printf("char is not vowel \n");

	   printf("try again \n");
	   }
	   printf("thanks\n");

	   }
	 */
{
	int n1,n2,n3;
	char op;

	printf("enter the numbers \n");
	scanf("%d%d",&n1,&n2);

	printf("enter oprator= \n+\n-\n*\n/\n");
	scanf("%c",&op);

switch(op)
{
	case '+':n3=n1+n2;
	       printf("n3=%d\n",n3);
	       break;

	case '-':n3=n1-n2;
	       printf("n3=%d\n",n3);
	       break;
	case '*':n3=n1*n2;
	       printf("n3=%d\n",n3);
	       break;
	case '/':n3=n1/n2;
       		printf("n3=%d\n",n3);
      	 	break;

default:
       printf("unknow \n");
}
}
