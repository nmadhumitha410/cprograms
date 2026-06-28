

#include <stdio.h>

int main()
{

	printf("short int is %d bytes\n", sizeof(short int));
	printf("int is %d bytes\n", sizeof(int));
	printf("long int is %d bytes\n", sizeof(long int));
	printf("unsigned int is %d bytes\n", sizeof(unsigned int));
	printf("float  is %d bytes\n", sizeof(float));
	printf("double  is %d bytes\n", sizeof(double));
	printf("long double is %d bytes\n", sizeof(long double));
	printf("signed char is %d bytes\n", sizeof(signed char));
	printf("unsigned char is %d bytes\n", sizeof(unsigned char));

	return 0;
}
