#include <iostream>

using namespace std;

int a, b;
bool result;

void __div_mul_read(void) {
	cin >> a >> b;
}

void __div_mul_solve(void) {
	if (!a) {
		result = false;
		return;
	}

	result = !(b % a);
}

void __div_mul_print_result(void) {
	cout << a << (result ? " | " : " !| ") << b << endl;
}

int main(int argc, char *argv[]) {
	__div_mul_read();
	__div_mul_solve();
	__div_mul_print_result();

	return 0;
}
