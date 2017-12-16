#include <stdio.h>

static void seq(void)
{
	int a, b, c;
	int i;

	scanf("%d %d", &a, &b);
	if (a > b) {
		c = a;
		a = b;
		b = c;
	}
	for (i = a; i <= b; i++)
		printf("%d ", i);
	printf("\n");
}

int main(int argc, char * argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		seq();

	return 0;
}
