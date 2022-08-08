#include <stdio.h>
int factorial(int a)
{
	if (a == 1 || a == 0)
	{
		return 1;
	}
	else
	{
		return a * factorial(a - 1);
	}
}

int main()
{
	int n, r;
	printf("Enter the total number of different objects ");
	scanf("%d", &n);
	printf("Enter the total number of vacant places ");
	scanf("%d", &r);
	int P,Q;
	P = n - r;
	Q= factorial(P)*factorial(r);


	printf("The total number of permutations according to the given quantities is %d\n", factorial(n) / factorial(P));
	printf("The total number of combinations according to the given quantities is %d\n", factorial(n)/Q);

	return 0;
}