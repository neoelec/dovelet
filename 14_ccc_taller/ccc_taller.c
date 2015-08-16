#include <stdio.h>

#define N_MAX			1000000
#define M_MAX			10000000

static int N, M;
static int T[M_MAX + 1];
static int L[M_MAX + 1];

static void ccc_taller(void)
{
	int p, q;
	int i, j;

	scanf("%d %d", &N, &M);

	for (i = 0; i < M; i++)
		scanf("%d %d", &T[i], &L[i]);

	scanf("%d %d", &p, &q);

	i = 0;
	while (i < M) {
		if (T[i] == p && L[i] == q) {
			printf("yes\n");
			return;
		} else if (L[i] == p && T[i] == q) {
			printf("no\n");
			return;
		}

		i++;

		if (T[i] == p && L[i] != p) {
			for (j = 0; j < M; j++)
				if (T[j] == L[i])
					T[j] = p;
			L[i] = p;
			i = 0;
		}

		if (L[i] == q && T[i] != q) {
			for (j = 0; j < M; j++)
				if (L[j] == T[i])
					L[j] = q;
			T[i] = q;
			i = 0;
		}
	}

	printf("unknown\n");
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		ccc_taller();

	return 0;
}
