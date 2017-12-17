#include <stdio.h>

static const int menu[][5] = {
	{ 0, 461, 431, 420, 0 },
	{ 0, 130, 160, 118, 0 },
	{ 0, 100, 57, 70, 0 },
	{ 0, 167, 266, 75, 0 },
};

static void calorie(void)
{
	int a, c;
	int i;

	for (i = 0, c = 0; i < 4; i++) {
		scanf("%d", &a);
		c += menu[i][a];
	}

	printf("Your total Calorie count is %d.\n", c);
}

int main(int argc, char *argv[])
{
	int C;

	scanf("%d", &C);
	while(C--)
		calorie();

	return 0;
}
