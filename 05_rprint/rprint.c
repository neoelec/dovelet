#include <stdio.h>

#define NMAX			1000

static int N[NMAX + 1];

int main(int argc, char *argv[])
{
	int n, i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &N[i]);

	for (i = n - 1; i >= 0; i--)
		printf("%d ", N[i]);

	putchar('\n');

	return 0;
}
