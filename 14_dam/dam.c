#include <stdio.h>

#define T_MAX			100

static int T, K;
static int map[T_MAX + 1][T_MAX + 1];
static int time[T_MAX + 1][T_MAX + 1];

static void DFS(int x, int y, int t)
{
	if (time[y][x] <= K)
		return;

	time[y][x] = t;
	map[y][x] = 1;

	if (y > 1 && !map[y - 1][x])
		DFS(x, y - 1, t + 1);
	if (y < T && !map[y + 1][x])
		DFS(x, y + 1, t + 1);
	if (x > 1 && !map[y][x - 1])
		DFS(x - 1, y, t + 1);
	if (x < T && !map[y][x + 1])
		DFS(x + 1, y, t + 1);

	map[y][x] = 0;
}

static void dam(void)
{
	int nr_dam = 0;
	int x, y;
	int i, j;

	scanf("%d", &T);

	for (i = 1; i <= T; i++) {
		for (j = 1; j <= T; j++) {
			scanf("%d", &map[i][j]);
			time[i][j] = T_MAX * 2;
		}
	}

	scanf("%d %d", &x, &y);
	scanf("%d", &K);

	DFS(x, y, 0);

	for (i = 1; i <= T; i++)
		for (j = 1; j <= T; j++)
			if (time[i][j] == K)
				nr_dam++;

	if (nr_dam)
		printf("%d\n", nr_dam);
	else
		printf("OH, MY GOD\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		dam();

	return 0;
}
