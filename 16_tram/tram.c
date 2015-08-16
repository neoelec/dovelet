#include <stdio.h>

#define N_MAX			100

static int N, A, B;
static int cross[N_MAX + 1];
static int from[N_MAX + 1][N_MAX + 1];
static int min;

static void DFS(int f, int c)
{
	int i;

	for (i = 1; i <= cross[f]; i++) {
		if (from[f][i] == A) {
			if (min > c)
				min = c;
			return;
		}
		DFS(from[f][i], c + 1);
	}
}

static void tram(void)
{
	int i, j;

	scanf("%d %d %d", &N, &A, &B);

	for (i = 1; i <= N; i++) {
		scanf("%d", &cross[i]);
		for (j = 1; j <= cross[i]; j++)
			scanf("%d", &from[i][j]);
	}

	min = N * N;
	DFS(B, 0);

	printf("%d", min);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		tram();

	return 0;
}
