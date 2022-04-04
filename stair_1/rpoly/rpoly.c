#include <math.h>
#include <stdio.h>

double r;
int n;
double result;

void __rpoly_read(void) {
	scanf("%lf%d", &r, &n);
}

void __rpoly_solve(void) {
	result = r * r * sin(2. * M_PI / (double)n) / 2 * (double)n;
}

void __rpoly_print_result(void) {
	printf("%.3lf\n", result);
}

int main(int argc, char *argv[]) {
	__rpoly_read();
	__rpoly_solve();
	__rpoly_print_result();

	return 0;
}
