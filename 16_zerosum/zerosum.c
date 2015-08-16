#include <stdio.h>

#define N_MAX			9

static int N;
static int val[N_MAX];
static char formula[N_MAX];

static void print_formula(void)
{
	int sum = 0;
	int i;

	val[1] = 1;
	for (i = 2; i <= N; i++) {
		switch (formula[i]) {
		case '+':
			val[i] = i;
			break;
		case '-':
			val[i] = -i;
			break;
		case ' ':
			if (val[i - 1] < 0)
				val[i] = val[i - 1] * 10 - i;
			else
				val[i] = val[i - 1] * 10 + i;
			val[i - 1] = 0;
		}
	}

	for (i = 1; i <= N; i++)
		sum += val[i];

	if (!sum) {
		printf("1");
		for (i = 2; i <= N; i++)
			printf("%c%d", formula[i], i);
		printf("\n");
	}
}

static void DFS(int v, char o)
{
	char op[] = { ' ', '+', '-' };
	int i;

	formula[v] = o;

	if (N == v) {
		print_formula();
		return;
	}

	for (i = 0; i < 3; i++)
		DFS(v + 1, op[i]);
}

static void zerosum(void)
{
	scanf("%d", &N);

	DFS(1, '+');
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		zerosum();

	return 0;
}
