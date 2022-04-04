#include <iostream>

using namespace std;

int x, y, z;

void __faktor_read(void) {
	cin >> y >> z;
}

void __faktor_solve(void) {
	x = y * (z - 1) + 1;
}

void __faktor_print_result(void) {
	cout << x << endl;
}

int main(int argc, char *argv[]) {
	__faktor_read();
	__faktor_solve();
	__faktor_print_result();

	return 0;
}
