#include <iostream>

using namespace std;

#define min(__a, __b)		((__a) < (__b) ? (__a) : (__b))

bool odd;
int sum_odd;
int min_odd = 101;

void __odd_read_and_solve(void) {
	int i;
	int x;

	for (i = 0; i < 7; i++) {
		cin >> x;

		if (!(x % 2))
			continue;

		odd = true;
		sum_odd += x;
		min_odd = min(min_odd, x);
	}
}

void __odd_print_result(void) {
	if (odd)
		cout << sum_odd << "\n" << min_odd << endl;
	else
		cout << "-1" << endl;
}

int main(int argc, char *argv[]) {
	__odd_read_and_solve();
	__odd_print_result();

	return 0;
}
