#include <stdio>

/**
 * main - Prints the first 92 fibonacci number
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
	}
	k += j;
	j = k - j;
	printf(", %ld", k);
}
++i;
}
printf("\n");
return (0);
}
