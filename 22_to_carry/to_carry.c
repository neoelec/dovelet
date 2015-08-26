#include <stdio.h>

static void to_carry(void)
{
	unsigned int a, b;

	scanf("%u %u", &a, &b);
	printf("%u\n", a ^ b);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		to_carry();

	return 0;
}
