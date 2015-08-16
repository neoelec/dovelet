#include <stdio.h>

#define A_MAX			21
#define CANDIDATES_MAX		21

static int C, B;
static int max;
static int sum;
static int basket[A_MAX];

static int finished;

static int is_a_solution(int a[], int k, int n)
{
	int i;

	sum = 0;
	for (i = 1; i <= k; i++)
		sum += a[i];

	if (sum > n)
		return 1;
	return 0;
}

static void process_solution(int a[], int k)
{
	sum -= a[k];

	if (max < sum)
		max = sum;

	if (C == max)
		finished = 1;
}

static void generate_candidates(int a[], int k, int n,
		int c[], int *nr_candidates)
{
	int i;

	*nr_candidates = B - k + 1;
	for (i = 0; i < *nr_candidates; i++)
		c[i] = basket[i + k - 1];
}

static void backtrack(int a[], int k, int n)
{
	int c[CANDIDATES_MAX + 1];
	int nr_candidates;
	int i;

	if (is_a_solution(a, k, n))
		process_solution(a, k);
	else {
		k += 1;
		generate_candidates(a, k, n, c, &nr_candidates);
		for (i = 0; i < nr_candidates; i++) {
			a[k] = c[i];
			backtrack(a, k, n);
			if (finished)
				return;
		}
	}
}

static void eating_puzzle(void)
{
	int a[A_MAX];
	int i;

	scanf("%d %d", &C, &B);

	for (i = 0; i < B; i++)
		scanf("%d", &basket[i]);

	finished = 0;
	max = 0;
	sum = 0;
	backtrack(a, 0, C);

	printf("%d\n", max);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		eating_puzzle();

	return 0;
}
