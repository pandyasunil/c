#include<stdio.h>
void main()
{
int i=10,j=20;
printf("%d %d \n",i,j);
/*i=i+j; //i=30
j=i-j;//j=30-20
i=i-j;//i=30-10*/

/*i=i*j;
j=i/j;
i=i/j;*/

j=i+j-(i=j);
//j=i*j/(i=j);

printf("%d %d \n",i,j);
}

