#include <iostream>

using namespace std;

double __even_sqrt(double y) {
	double x = 1.4;

	for (register int i = 0; i < 20; i++)
		x = (x + y / x) / 2.;

	return x;
}

int a, b;
int result;

void __even_read(void) {
	cin >> a;
	cin >> b;
}

void __even_solve(void) {
	int odd = (int)__even_sqrt((double)b)
		- (int)__even_sqrt((double)(a - 1));

	result = b - a - odd + 1;
}

void __even_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__even_read();
	__even_solve();
	__even_print_result();

	return 0;
}
