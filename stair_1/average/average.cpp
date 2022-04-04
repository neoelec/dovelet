#include <iostream>

using namespace std;

int input;
int average;

void __average_read(void) {
	int x;

	input = 0;
	for (register int i = 0; i < 4; i++) {
		cin >> x;
		input += x;
	}
}

void __average_solve(void) {
	input *= 100;
	average = input / 4;
}

void __average_print_result(void) {
	int x = average / 100;
	int y = average % 100;

	cout << x << '.';

	if (y < 10)
		cout << '0';

	cout << y << endl;
}

int main(int argc, char *argv[]) {
	__average_read();
	__average_solve();
	__average_print_result();

	return 0;
}
