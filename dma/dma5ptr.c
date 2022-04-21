#include<stdio.h>
#include<stdlib.h>
void main()
{
char *p[5];
int i;

for(i=0;i<5;i++)
p[i]=malloc(sizeof(char)*10);
for(i=0;i<5;i++)
scanf("%s",p[i]);
for(i=0;i<5;i++)
printf("%s",p[i]);

}
