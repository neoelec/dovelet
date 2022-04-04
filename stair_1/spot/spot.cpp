#include <stdio.h>

double p, r;
double d;

void __spot_read(void) {
	scanf("%lf%lf", &p, &r);
}

void __spot_solve(void) {
	d -= p * r / 100.;
}

void __spot_print_result(void) {
	printf("%.3lf\n", d);
}

int main(int argc, char *argv[]) {
	__spot_read();
	__spot_solve();
	__spot_print_result();

	return 0;
}
