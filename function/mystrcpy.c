#include<stdio.h>
void printstring(const char *);
void mystrcpy(const char *,char *);
void main()
{
char s[10],d[10];
printf("enter the string \n");
scanf("s=%s",s);
printstring(s);
mystrcpy(s,d);
printstring(s);

}
void printstring(const char *p)
{
int i;
for(i=0;p[i];i++)
printf("%c",p[i]);
}
void mystrcpy(const char *s,char *d)
{
int i;
for(i=0;s[i];i++)
d[i]=s[i];
d[i]='\0';
}

