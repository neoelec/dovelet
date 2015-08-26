#include <stdio.h>

#define N_MAX			50

static char F[N_MAX + 1];
static int S[N_MAX + 1];
static int cnt;

static void match(void)
{
	int i = 0;

	scanf("%s", F);

	cnt = 0;
	while (F[i]) {
		if (F[i] == '(')
			S[cnt++] = i;
		else if (F[i] == ')')
			printf("%d %d\n", S[--cnt], i);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		match();

	return 0;
}
