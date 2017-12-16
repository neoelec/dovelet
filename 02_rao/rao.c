#include <stdio.h>

#define max(_a, _b)	((_a) > (_b) ? (_a) : (_b))

static void rao(void)
{
	int a, b, acc;
	size_t i;

	for (i = 0, b = 0, acc = 0; i < 3; i++) {
		scanf("%d", &a);
		b = max(b, a);
		acc += (a * a);
	}

	b = b * b;
	acc -= b;
	if (b > acc)
		printf("obtuse\n");
	else if (b == acc)
		printf("right\n");
	else
		printf("acute\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		rao();

	return 0;
}
