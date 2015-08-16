#include <stdio.h>

#define N_MAX			20
#define M_MAX			20

static int N, M;
static int map[N_MAX][M_MAX];
static int min;

static void DFS(int x, int y, int l)
{
	if (x == M && y == 1) {
		if (min > l)
			min = l;
		return;
	}

	map[y][x] = 1;

	if (y > 1 && !map[y - 1][x])
		DFS(x, y - 1, l + 1);
	if (y < N && !map[y + 1][x])
		DFS(x, y + 1, l + 1);
	if (x > 1 && !map[y][x - 1])
		DFS(x - 1, y, l + 1);
	if (x < M && !map[y][x + 1])
		DFS(x + 1, y, l + 1);

	map[y][x] = 0;
}

static void maze(void)
{
	char buf[M_MAX + 2];
	int i, j;

	scanf("%d %d", &N, &M);

	for (i = 1; i <= N; i++) {
		scanf("%s", &buf[1]);
		for (j = 1; j <= M; j++)
			map[i][j] = buf[j] - '0';
	}

	min = N * M;
	DFS(1, N, 1);

	printf("%d\n", min);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		maze();

	return 0;
}
