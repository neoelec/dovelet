#include <iostream>

using namespace std;

unsigned int n;
unsigned int m;

void __flr_read(void) {
	cin >> n;
}

void __flr_solve(void) {
	m = 1;

	while (n >= (1UL << m))
		m++;
}

void __flr_print_result(void) {
	cout << m << endl;
}

int main(int argc, char *argv[]) {
	__flr_read();
	__flr_solve();
	__flr_print_result();

	return 0;
}
