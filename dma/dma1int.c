#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
p=malloc(sizeof(int));
printf("enter data \n");
scanf("%d",p);
printf("%d",*p);

}


