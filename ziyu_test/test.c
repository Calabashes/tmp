#include <stdio.h>
#include <string.h>

void main()
{
	union {
	  struct {
		unsigned short s1:3;
		unsigned short s2:3;
		unsigned short s3:3;
	}X;
	
	unsigned char c;
	}V;
	printf("sizeof(V) = %d\n",sizeof(V);
	memset(&V, 0, sizeof(V));

	V.c = 100;
	
	printf("s1 = %d\ns2=%d\ns3=%d\n",V.X.s1, V.X.s2, V.X.s3);
};
