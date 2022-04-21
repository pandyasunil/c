#include<stdio.h>
void main()
{
	char ch='a',*cp;
	int i=10,*ip;
	float f=23.5,*fp;

	cp=&ch;
	printf("ch=%c *cp=%c \n",ch,*cp);
	printf("%ld %ld\n",sizeof(ch),sizeof(cp));

	ip=&i;
	printf("i=%d *ip=%d \n",i,*ip);
	printf("%ld %ld\n",sizeof(i),sizeof(ip));


	fp=&f;
	printf("fp=%f *fp=%f \n",f,*fp);
	printf("%ld %ld\n",sizeof(f),sizeof(cp));

}
