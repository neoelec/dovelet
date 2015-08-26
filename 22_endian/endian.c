#include <stdio.h>

union int_v {
	int n;
	unsigned char b[4];
};

static void endian(void)
{
	union int_v a, b;
	int i;

	scanf("%d", &(a.n));
	for (i = 0; i < 4; i++)
		b.b[i] = a.b[3 - i];

	printf("%d converted to %d\n", a.n, b.n);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		endian();

	return 0;
}
