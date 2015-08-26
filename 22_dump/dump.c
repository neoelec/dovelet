#include <stdio.h>

static void dump(void)
{
	int n;
	int i;

	scanf("%d", &n);

	for (i = 31; i >= 0; i--) {
		printf("%u", !!((1U << i) & n));
		if (!(i % 8))
			printf(" ");
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		dump();

	return 0;
}
