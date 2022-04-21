#include<stdio.h>
void main()
{
	/*
	int i=10,j=20,k;  // here , work as seperator
	k=i,j;   //here k= i , work as operator              //result of , operator is always op2...
	printf("k=%d..\n",k);
	k=(i,j); //here k=j , work as operator
	printf("k=%d..\n",k);
	k=(i,j,30); // here k=30 ,work as operator
        printf("k=%d..\n",k);
        
         */

	int i;
	i=10+20;
	printf("i=%d\n",i); //, work as seprator
	i=10,20;
	printf("i=%d\n",i); 
	i=(10,20); //, work as operator
	printf("i=%d\n",i); 
}
	

