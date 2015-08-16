#include <stdio.h>

#define V_MAX			10

static int N, S;
static int map[V_MAX + 1][V_MAX + 1];
static int visit[V_MAX + 1];

static void DFS(int n)
{
	int i;

	printf("%d ", n);
	visit[n] = 1;

	for (i = 1; i <= N; i++)
		if (map[n][i] && !visit[i])
			DFS(i);
}

static void dfs(void)
{
	int x, y;
	int i, j;

	scanf("%d %d", &N, &S);

	for (i = 1; i <= V_MAX; i++) {
		visit[i] = 0;
		for (j = 1; j <= N; j++)
			map[i][j] = 0;
	}

	for (i = 1; i <= V_MAX; i++) {
		scanf("%d %d", &x, &y);
		map[y][x] = 1;
		map[x][y] = 1;
	}

	DFS(S);
	printf("\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		dfs();

	return 0;
}
