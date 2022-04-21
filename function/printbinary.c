#include<stdio.h>
void print_binary(int);
void main()
{
int num,n;


printf("enter num \n");
scanf("%d",&num);
printf("enter num \n");
scanf("%d",&n);
for(num;num<=n;num++)
{
print_binary(num);printf(":%d",num);
printf("\n");
}



}

void print_binary(int n)
{
int pos;
for(pos=31;pos>=0;pos--)
{
printf("%d",n>>pos&1);
if(pos%8==0) 
printf(" ");
}
}

