#include <stdio.h>

#define N_MAX			100000
#define GATE_MAX		4

static int N;
static int map[N_MAX + 1][GATE_MAX];
static int room[N_MAX + 1];
static int visit[N_MAX + 1];

static void DFS(int n)
{
	int i;

	printf("%d ", n);
	visit[n] = 1;

	for (i = 0; i < room[n]; i++)
		if (!visit[map[n][i]])
			DFS(map[n][i]);
}

static void starship_maze(void)
{
	int M;
	int p, q;
	int i, j;

	scanf("%d %d", &N, &M);

	for (i = 1; i <= N; i++) {
		for (j = 0; j < GATE_MAX; j++)
			map[i][j] = N_MAX + 1;
		room[i] = 0;
		visit[i] = 0;
	}

	for (i = 0; i < M; i++) {
		scanf("%d %d", &p, &q);
		for (j = room[p]; j > 0; j--) {
			if (map[p][j - 1] < q)
				break;
			map[p][j] = map[p][j - 1];
		}
		map[p][j] = q;
		room[p]++;

		for (j = room[q]; j > 0; j--) {
			if (map[q][j - 1] < p)
				break;
			map[q][j] = map[q][j - 1];
		}
		map[q][j] = p;
		room[q]++;
	}

	DFS(1);
	printf("\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		starship_maze();

	return 0;
}
