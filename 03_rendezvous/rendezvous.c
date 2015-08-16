#include <stdio.h>

static int gcd(int m, int n)
{
	int t;

	while (n) {
		t = m;
		m = n;
		n = t % n;
	}

	return m;
}

static void rendezvous(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", (a + b) / gcd(a, b));
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		rendezvous();

	return 0;
}
