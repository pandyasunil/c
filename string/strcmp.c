#include<stdio.h>
void main()
{
char f[5],s[5],i;
printf("enter f ans s \n");
scanf("%s %s",f,s);

for(i=0;f[i];i++)
{
if(f[i]!=s[i])
break;
}

if(f[i]==s[i])
printf("equal \n");
else 
printf("not equal \n");

}

