#include <iostream>

using namespace std;

#define min(__a, __b)		((__a) < (__b) ? (__a) : (__b))

int result = 101;

void __min_read_and_solve(void) {
	int i;
	int x;

	for (i = 0; i < 7; i++) {
		cin >> x;
		result = min(result, x);
	}
}

void __min_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__min_read_and_solve();
	__min_print_result();

	return 0;
}
