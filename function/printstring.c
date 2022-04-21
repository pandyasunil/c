#include<stdio.h>
void printstring(char *);
int stringlen(char *);
void main()
{
int l;
char s[10];
scanf("%s",s);
printstring(s);
l=stringlen(s);
printf("%d \n",l);

printf("\n");
}
void printstring(char *p)
{
int i;

for(i=0;p[i];i++)
printf("%c ",p[i]);
printf("\n");
}
int stringlen(char *p)
{
int i;
for(i=0;p[i];i++);
return i;
}
