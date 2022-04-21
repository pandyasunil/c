#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("abc.txt","w");
//rename("abc.txt","file1.txt");
//remove("file1.txt");
while((ch=getchar())!=97)
{
putc(ch,fp);
}
fclose(fp);
return 0;
}

