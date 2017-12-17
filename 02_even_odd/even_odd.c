#include <stdio.h>

#define __even_odd(a)	((a) % 2 ? "odd" : "even")

static void even_odd(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%s+%s=%s\n", __even_odd(a), __even_odd(b), __even_odd(a + b));
	printf("%s*%s=%s\n", __even_odd(a), __even_odd(b), __even_odd(a * b));
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		even_odd();

	return 0;
}
