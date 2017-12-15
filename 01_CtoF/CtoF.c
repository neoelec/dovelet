#include <stdio.h>

static void CtoF(void)
{
	int C;

	scanf("%d", &C);
	printf("%.1f\n", 9. / 5. * (float)C + 32.);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		CtoF();

	return 0;
}
