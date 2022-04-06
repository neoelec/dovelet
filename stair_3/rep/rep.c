#include <stdio.h>

int n;

void __rep_read(void) {
	scanf("%d", &n);
}

void __rep_solve_and_print_result(void) {
	int i = 1;

	printf("%d", i++);
	for (; i <= n; i++)
		printf(" %d", i);

	printf("\n");
}

int main(int argc, char *argv[]) {
	__rep_read();
	__rep_solve_and_print_result();

	return 0;
}
