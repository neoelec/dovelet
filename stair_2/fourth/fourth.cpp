#include <iostream>

using namespace std;

int x[4], y[4];

void __fourth_read(void) {
	for (size_t i = 0; i < 4; i++)
		cin >> x[i] >> y[i];
}

int ____fourth_solve(int a[4]) {
	return a[0] == a[1] ? a[2] : (a[0] + a[1] - a[2]);
}

void __fourth_solve(void) {
	x[3] = ____fourth_solve(x);
	y[3] = ____fourth_solve(y);
}

void __fourth_print_result(void) {
	cout << x[3] << ' ' << y[3] << endl;
}

int main(int argc, char *argv[]) {
	__fourth_read();
	__fourth_solve();
	__fourth_print_result();

	return 0;
}
