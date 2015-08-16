#include <stdio.h>

#define S2M			60
#define S2H			(S2M * 60)
#define S2D			(S2H * 24)

static void sec(void)
{
	int s;

	scanf("%d", &s);

	printf("%d %d %d %d\n", s / S2D, s / S2H, s / S2M, s % S2M);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		sec();

	return 0;
}
