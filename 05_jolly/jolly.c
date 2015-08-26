#include <stdio.h>

#define N_MAX			3000

#define _abs(__a)		((__a) > 0 ? (__a) : -1 * (__a))

static int N;
static int J[N_MAX + 1];

static void jolly(void)
{
	int i;
	int a, b, c;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		J[i] = 0;

	scanf("%d", &a);
	for (i = 2; i <= N; i++) {
		scanf("%d", &b);
		c = _abs(b - a);
		J[c]++;
		a = b;
	}

	for (i = 1; i <= N - 1; i++) {
		if (J[i] != 1) {
			printf("Not jolly\n");
			return;
		}
	}
	printf("jolly jumper\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		jolly();

	return 0;
}
