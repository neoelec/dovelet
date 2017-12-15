#include <stdio.h>

static void q_r(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d %d\n", a / b, a % b);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		q_r();

	return 0;
}
