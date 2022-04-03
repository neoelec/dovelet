#include <iostream>

using namespace std;

int a, b;

void __swap(int &x, int &y) {
	int tmp = x;

	x = y;
	y = tmp;
}

void __swap_read(void) {
	cin >> a >> b;
}

void __swap_solve(void) {
	__swap(a, b);
}

void __swap_print_result(void) {
	cout << a << ' ' << b << endl;
}

int main(int argc, char *argv[]) {
	__swap_read();
	__swap_solve();
	__swap_print_result();

	return 0;
}
