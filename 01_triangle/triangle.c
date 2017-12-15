#include <stdio.h>

static void triangle(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%.2f\n", (float)(a * b) / 2.);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		triangle();

	return 0;
}
