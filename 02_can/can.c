#include <stdio.h>

static void can(void)
{
	int b, w;

	scanf("%d %d", &b, &w);
	printf("%s\n", (w % 2) ? "white" : "black");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		can();

	return 0;
}
