#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		putchar('*');
	putchar('\n');

	return 0;
}
