#include <stdio.h>

#define STRLEN_MAX		200
#define ALPHA_MAX		26

static int alpha[ALPHA_MAX];
static char str_buf[STRLEN_MAX + 1];
static char output[STRLEN_MAX + 1];
static int len;

static void DFS(int n)
{
	int i;

	if (n >= len) {
		printf("%s\n", output);
		return;
	}

	for (i = 0; i < ALPHA_MAX; i++) {
		if (!alpha[i])
			continue;
		alpha[i] -= 1;
		output[n] = 'a' + i;
		DFS(n + 1);
		alpha[i] += 1;
	}
}


static void orders(void)
{
	char *str = str_buf;
	int i;

	scanf("%s", str);

	for (i = 0; i < ALPHA_MAX; i++)
		alpha[i] = 0;

	len = 0;
	while (*str) {
		alpha[*str - 'a'] += 1;
		str++;
		len++;
	}

	DFS(0);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while (C--)
		orders();

	return 0;
}
