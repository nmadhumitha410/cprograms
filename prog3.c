#include <stdio.h>

int main()
{
	int a, b, c, d;

	// Increment operator
	printf("Enter any integer: ");
	scanf("%d", &a);

	printf("\nPost Increment Value of %d is : %d\n",a, a++);

	printf("\nPre Increment value of %d is : %d\n",a, ++a);

	return 0;
}
