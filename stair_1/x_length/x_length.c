#include <stdio.h>

double __length_sqrt(double y) {
	double x = 1.4;

	for (register int i = 0; i < 20; i++)
		x = (x + y / x) / 2.;

	return x;
}

int a, b;
double result;
const double pi = 3.14159;

void __length_read(void) {
	scanf("%d%d", &a, &b);
}

void __length_solve(void) {
	result = __length_sqrt(2.) * (double)(a + b);
	result += pi * (double)a;
	result += pi * (double)b;
}

void __length_print_result(void) {
	printf("%.3lf\n", result);
}

int main(int argc, char *argv[]) {
	__length_read();
	__length_solve();
	__length_print_result();

	return 0;
}
