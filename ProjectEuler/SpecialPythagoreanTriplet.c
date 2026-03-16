#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 1; a < 1000; a++)
	{
		for (b = a + 1; b < 1000; b++)
		{
			int c = 1000 - a - b;

			if (c <= b)
				continue;

			if (a * a + b * b == c * c)
			{
				int product = a * b * c;
				printf("Triplet found : a=%d, b=%d, c=%d\n", a, b, c);
				printf("Product abc = %d\n", product);
				return 0;
			}
		}
	}

	printf("No triplet found.\n");
	return 1;
}


// Triplet = a=200, b=375, c=425
// Product abc = 31875000