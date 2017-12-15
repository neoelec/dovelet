#include <stdio.h>

static void average(void)
{
	int a, b;
	size_t loop = 4, i;

	for (i = 0, b = 0; i < loop; i++) {
		scanf("%d", &a);
		b += a;
	}

	printf("%.2f\n", (float)b / (float)loop);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		average();

	return 0;
}
