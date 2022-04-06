#include <stdio.h>

int n;

void __gugudan_read(void) {
	scanf("%d", &n);
}

void __gugudan_solve_print_result(void) {
	int i;

	for (i = 1; i <= 9; i++)
		printf("%d*%d=%d\n", n, i, n * i);
}

int main(int argc, char *argv[]) {
	__gugudan_read();
	__gugudan_solve_print_result();

	return 0;
}
