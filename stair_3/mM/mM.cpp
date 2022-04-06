#include <iostream>

using namespace std;

#define min(__a, __b)		((__a) < (__b) ? (__a) : (__b))
#define max(__a, __b)		((__a) > (__b) ? (__a) : (__b))

int result_min = 101;
int result_max;

void __min_read_and_solve(void) {
	int i;
	int x;

	for (i = 0; i < 7; i++) {
		cin >> x;
		result_min = min(result_min, x);
		result_max = max(result_max, x);
	}
}

void __min_print_result(void) {
	cout << result_max << ' ' << result_min << endl;
}

int main(int argc, char *argv[]) {
	__min_read_and_solve();
	__min_print_result();

	return 0;
}
