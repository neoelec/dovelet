#include <iostream>

using namespace std;

int r1, r2, m;

void __r2_read(void) {
	cin >> r1 >> m;
}

void __r2_solve(void) {
	r2 = 2 * m - r1;
}

void __r2_print_result(void) {
	cout << r2 << endl;
}

int main(int argc, char *argv[]) {
	__r2_read();
	__r2_solve();
	__r2_print_result();

	return 0;
}
