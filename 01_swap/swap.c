#include <stdio.h>

static void swap(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d %d\n", b, a);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		swap();

	return 0;
}
