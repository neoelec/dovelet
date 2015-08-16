#include <stdio.h>

static void m2s(void)
{
	int s;

	scanf("%d", &s);

	printf("%d minutes is %d seconds.\n", s, s * 60);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		m2s();

	return 0;
}
