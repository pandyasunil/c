//wap to swaping of two number

#include<stdio.h>
void main()
{
//int i,j,temp;

int i,j;
printf("enter i & j\n");
scanf("%d %d",&i,&j);
printf("before swap i=%d j=%d\n",i,j);
/*
temp=i;  (using temp varialble and assignment operator)
i=j;
j=temp;
*/
/*
i=i+j; //10+20=30
j=i-j; (using arithmatic operator)
i=i-j;
*
/
i=i*j;
j=i/j; 
i=i/j;
*/

//(j=i+j-(i=j)); // single exp fro swaping 2 no.
(j=i*j/(i=j));



printf("after swap i=%d j=%d\n",i,j);
}
