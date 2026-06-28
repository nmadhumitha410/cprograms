#include <stdio.h>

int main()
{
int a, b, c, d;

// Increment operator
printf("Enter any integer: ");
scanf("%d", &a);

a++;
printf("\nPost Increment Value: %d\n", a);

++a;
printf("\nPre Increment value: %d\n", a);

// Decrement operator
printf("\nEnter any integer: ");
scanf("%d", &a);

a--;
printf("\nPost Decrement value: %d\n", a);

--a;
printf("\nPre Decrement value: %d\n", a);

// Ternary operator
printf("\nEnter two integers: ");
scanf("%d %d", &a, &b);

c = (a > b ? a : b);

printf("\nLargest value (c) = %d\n", c);

// Compound Assignment Operators
printf("\nEnter any integer: ");
scanf("%d", &d);

d += 10;
printf("Addition: %d\n", d);

d -= 10;
printf("Subtraction: %d\n", d);

d *= 10;
printf("Multiplication: %d\n", d);

d /= 10;
printf("Division: %d\n", d);

d %= 10;
printf("Modulus Division: %d\n", d);

d &= 10;
printf("Bitwise AND: %d\n", d);

d ^= 10;
printf("Bitwise XOR: %d\n", d);

return 0;
}
