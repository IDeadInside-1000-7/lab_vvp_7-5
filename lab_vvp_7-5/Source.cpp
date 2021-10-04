#include <stdio.h>
#include <math.h>
int main()
{
	float A, x, B;
	printf("Enter A: ");
	scanf("%f", &A);
	if (A == 0)
		printf("You should write (a != 0) !!! ");
	else if (A != 0)
		printf("Enter B: ");
		scanf("%f", &B);
		if (B == 0)
			x = 0;
		if (B > 0)
			x = ((-1) * B) / A;
		if (B < 0)
			x = ((-1) * B) / A;
	printf("x = ");
	printf("%f\n", x);

}