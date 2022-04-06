#include <stdio.h>

int n;

void __star_read(void) {
	scanf("%d", &n);
}

void __star_sove_and_print_result(void) {
	int i;

	for (i = 0; i < n; i++)
		putchar('*');

	putchar('\n');
}

int main(int argc, char *argv[]) {
	__star_read();
	__star_sove_and_print_result();

	return 0;
}
