#include <stdio.h>

#define __print_op(a, b, o)	\
	printf("%d%s%d=%d\n", a, #o, b, a o b)

static void op(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	__print_op(a, b, +);
	__print_op(a, b, -);
	__print_op(a, b, *);
	__print_op(a, b, /);
	__print_op(a, b, %);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		op();

	return 0;
}
