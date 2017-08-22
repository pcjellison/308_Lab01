#include <stdio.h>
int main()
{
	int base;
	int power;

	printf("Enter a base number and a power number");
	scanf_s("%d %d", &base, &power);

	if (base <= 0 || power <= 0)
	{
		printf("Invalid Numbers");
	}
	int finalNum = pow(base, power);
}

int pow(base, power)
{
	if (power == 0)
	{
		return 1;
	}
	else
	{
		return base*pow(base, power - 1);
	}
}