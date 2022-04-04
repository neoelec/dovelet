#include <iostream>

using namespace std;

int a, b;

void __three_read(void) {
	cin >> a >> b;
}

void __three_solve_and_print_result(void) {
	cout << a * (b % 10) << endl;
	cout << a * (b / 10 % 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b << endl;
}

int main(int argc, char *argv[]) {
	__three_read();
	__three_solve_and_print_result();
	return 0;
}
