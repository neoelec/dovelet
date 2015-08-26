#include <stdio.h>

static void rms(void)
{
	unsigned int n;
	unsigned int i;

	scanf("%u", &n);
	for (i = 0; i < 32; i++) {
		if (n & (1 << i)) {
			printf("%u\n", (1 << i));
			return;
		}
	}
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		rms();

	return 0;
}
