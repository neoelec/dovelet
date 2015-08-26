#include <stdio.h>

static void rbit(void)
{
	unsigned int a, b;
	int i;

	scanf("%x", &a);
	for (i = 7, b = 0; i >= 0; i--)
		b |= !!(a & (1 << i)) << (7 - i);

	printf("%X\n", b);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		rbit();

	return 0;
}
