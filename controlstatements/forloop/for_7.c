//wap to mask the bit and convert little endinness to big endinness.(masking concept)
//num is in hexa=ox11223344
//after convert =ox44332211


#include<stdio.h>
void main()
{

	unsigned int n=0x11223344,n1,n2,n3,n4;
	printf("n=%x \n",n);
        n1=n&0x000000ff;

        n2=n&0x0000ff00;

        n3=n&0x00ff0000;

        n4=n&0xff000000;
	
	n1=n1<<24;
	n2=n2<<8;
	n3=n3>>8;
	n4=n4>>24;

	n=n1|n2|n3|n4;

	printf("n=%x \n",n);


}
