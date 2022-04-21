#include<stdio.h>
void main()
{
char f[20],s[10],i,j;

printf("enter the first string\n");
scanf("%s",f);

printf("enter the second string\n");
scanf("%s",s);

printf("%s %s ",f,s);
printf("\n");
/////////////////////////////
for(i=0;f[i];i++);
for(j=0;s[j];j++,i++)
f[i]=s[j];
f[i]='\0';

////////////////////////////////
printf("%s %s ",f,s);
printf("\n");
}

