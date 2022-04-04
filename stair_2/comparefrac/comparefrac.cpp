#include <iostream>

using namespace std;

int a, b, c, d;
int result;

void __comparefrac_read(void) {
	cin >> a >> b >> c >> d;
}

void __comparefrac_solve(void) {
	a *= d;
	c *= b;

	if (a > c)
		result = 1;
	else if (a < c)
		result = -1;
	else
		result = 0;
}

void __comparefrac_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__comparefrac_read();
	__comparefrac_solve();
	__comparefrac_print_result();

	return 0;
}
