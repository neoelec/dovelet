#include <iostream>

using namespace std;

int a, b;
char result;

void __compare_read(void) {
	cin >> a >> b;
}

void __compare_solve(void) {
	if (a > b)
		result = '>';
	else if (a < b)
		result = '<';
	else
		result = '=';
}

void __compare_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__compare_read();
	__compare_solve();
	__compare_print_result();

	return 0;
}
