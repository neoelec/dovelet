#include <stdio.h>

#define N_MAX			1000000
#define POS_MAX			(N_MAX * 2)

static int N, K;
static int map[POS_MAX + 1];

static void DFS(int n, int l)
{
	if (map[n] <= l || map[K] <= (l - 1))
		return;

	map[n] = l;

	if (n == K)
		return;

	if (n > 1)
		DFS(n - 1, l + 1);
	if (n < POS_MAX)
		DFS(n + 1, l + 1);
	if (n * 2 < POS_MAX)
		DFS(n * 2, l + 1);
}

static void catch_cow(void)
{
	int i;

	scanf("%d %d", &N, &K);

	for (i = 1; i <= POS_MAX; i++)
		map[i] = POS_MAX;

	DFS(5, 0);

	printf("%d\n", map[K]);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		catch_cow();

	return 0;
}
