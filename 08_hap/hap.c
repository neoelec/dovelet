#include <stdio.h>

static int __hap(int a, int b)
{
	return a + b;
}

static void hap(void)
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("%d\n", __hap(__hap(a, b), __hap(c, d)));
}

int main(int argc, char *argv[])
{
	unsigned int T;

	scanf("%u", &T);
	while (T--)
		hap();

	return 0;
}
