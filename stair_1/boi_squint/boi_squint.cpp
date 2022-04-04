#include <iostream>

using namespace std;

unsigned long long n;
unsigned long long q;

double __squint_sqrt(double y) {
	double x = 2.;

	for (register int i = 0; i < 75; i++)
		x = (x + y / x) / 2.;

	return x;
}

void __squint_read(void) {
	cin >> n;
}

void __squint_solve(void) {
	q = (unsigned long long)__squint_sqrt((double)n);

	while (n > q * q)
		q++;
}

void __squint_print_result(void) {
	cout << q << endl;
}

int main(int argc, char *argv[]) {
	__squint_read();
	__squint_solve();
	__squint_print_result();

	return 0;
}
