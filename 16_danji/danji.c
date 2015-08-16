#include <stdio.h>

#define N_MAX			25
#define GROUP_MAX		(N_MAX * N_MAX)

static int N;
static int map[N_MAX][N_MAX];
static int group[GROUP_MAX];
static int cnt;

static void DFS(int x, int y)
{
	map[y][x] = 0;
	group[cnt]++;

	if (y > 1 && map[y - 1][x])
		DFS(x, y - 1);
	if (y < N && map[y + 1][x])
		DFS(x, y + 1);
	if (x > 1 && map[y][x - 1])
		DFS(x - 1, y);
	if (x < N && map[y][x + 1])
		DFS(x + 1, y);
}

static void danji(void)
{
	int i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		for (j = 1; j <= N; j++)
			scanf("%d", &map[i][j]);

	cnt = 0;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (!map[i][j])
				continue;
			group[++cnt] = 0;
			DFS(j, i);
		}
	}

	printf("%d\n", cnt);
	for (i = 1; i <= cnt; i++)
		printf("%d\n", group[i]);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		danji();

	return 0;
}
