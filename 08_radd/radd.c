#include <stdio.h>

static unsigned int __reverse(unsigned int a)
{
	unsigned int b = 0;

	while (a) {
		b = (10 * b) + (a % 10);
		a = a / 10;
	}

	return b;
}

static void radd(void)
{
	unsigned int a, b;

	scanf("%u %u", &a, &b);

	printf("%u\n", __reverse(__reverse(a) + __reverse(b)));
}

int main(int argc, char *argv[])
{
	unsigned int T;

	scanf("%u", &T);
	while (T--)
		radd();

	return 0;
}
