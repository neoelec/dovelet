#include <iostream>

using namespace std;

int x0, z0;
int x1, z1;
int a, b;

void __slant_read(void) {
	cin >> x0 >> z0;
	cin >> x1 >> z1;
}

void __slant_solve(void) {
	a = (z1 - z0) / (x1 - x0);
	b = z0 - x0 * a;
}

void __slant_print_result(void) {
	cout << a << ' ' << b << endl;
}

int main(int argc, char *argv[]) {
	__slant_read();
	__slant_solve();
	__slant_print_result();

	return 0;
}
