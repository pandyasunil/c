#include<stdio.h>
void main()
{
char ch;
printf("enter the char \n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf("char is lowwer\n");
else if (ch>='A' && ch<='z')
printf("char is upper \n");
else
printf("char is spl \n");

}
