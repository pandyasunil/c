#include<stdio.h>
void main()
{
	//int i=10,j=20,k;
	//i>j?printf("k=true\n"):(printf("k=fals\n"));
	//printf("k=%d\n",k);
       
	 int num;
	 printf("enter the number...\n");
	 scanf("%d",&num);
//	 num%2?printf("odd\n"):printf("even\n");//to find no. is odd or even

	 num&num-1?printf("no\n"):printf("yes\n"); //to find no. is powwer of 2 or not
	
/*
	int a=10,b=20,c=30;

	printf("a=%d b=%d c=%d \n",a,b,c);
	a>b?(a>c?a:c):(b>c?b:c);
	//printf("a=%d b=%d c=%d \n",a,b,c);

*/


}
