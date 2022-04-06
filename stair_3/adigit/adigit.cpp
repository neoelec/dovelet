#include <iostream>

using namespace std;

int y_1, y_10, y_100;

void ____adigit_solve(int x) {
	if (x / 100)
		y_100 += x;
	else if (x / 10)
		y_10 += x;
	else
		y_1 += x;
}

void __adigit_read_and_solve(void) {
	int i;
	int x;

	for (i = 0; i < 7; i++) {
		cin >> x;
		____adigit_solve(x);
	}
}

void __adigit_print_result(void) {
	cout << y_1 << ' ' << y_10 << ' ' << y_100 << endl;
}

int main(int argc, char *argv[]) {
	__adigit_read_and_solve();
	__adigit_print_result();

	return 0;
}
