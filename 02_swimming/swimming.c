#include <stdio.h>

static void swimming(void)
{
	unsigned int u;

	scanf("%u", &u);

	if (1 == u || 3 == u || 5 == u)
		printf("enjoy\n");
	else
		printf("oops\n");
}

int main(int argc, char *argv[])
{
	unsigned int T;

	scanf("%u", &T);
	while (T--)
		swimming();

	return 0;
}
