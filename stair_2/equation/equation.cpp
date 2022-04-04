#include <cstdio>
#include <iostream>

using namespace std;

int a, b, c, d;
int numerator, denominator;

void __equation_read(void) {
	cin >> a >> b >> c >> d;
}

void __equation_solve(void) {
	numerator = a - c;
	denominator = d - b;
}

void __equation_print_result(void) {
	if (!denominator)
		cout << "many" << endl;
	else if (!numerator)
		cout << "none" << endl;
	else
		printf("%0.3f\n", static_cast<float>(denominator) / static_cast <float>(numerator));
}

int main(int argc, char *argv[]) {
	__equation_read();
	__equation_solve();
	__equation_print_result();

	return 0;
}
