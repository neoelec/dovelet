#include <iostream>

using namespace std;

int input;
int nr_100, nr_50, nr_10;

void __change_read(void) {
	cin >> input;

	input = 1000 - input;
}

void __change_solve(void) {
	nr_100 = input / 100;
	input -= nr_100 * 100;

	nr_50 = input / 50;
	input -= nr_50 * 50;

	nr_10 = input / 10;
}

void __change_print_result(void) {
	cout << nr_100 << ' ' << nr_50 << ' ' << nr_10 << endl;
}

int main(int argc, char *argv[]) {
	__change_read();
	__change_solve();
	__change_print_result();

	return 0;
}
