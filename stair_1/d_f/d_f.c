#include <stdio.h>

double N;
long long n;
double a;

void __d_f_read(void) {
	scanf("%lf", &N);
}

void __d_f_solve(void) {
	n = (long long)N;
	n = n < 0 ? n - 1 : n;
	a = N - (double)n;
}

void __d_f_print_result(void) {
	printf("%lld %0.2lf\n", n, a);
}

int main(int argc, char *argv[]) {
	__d_f_read();
	__d_f_solve();
	__d_f_print_result();

	return 0;
}
