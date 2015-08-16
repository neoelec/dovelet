#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
