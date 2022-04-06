#include <iostream>

using namespace std;

#define max(__a, __b)		((__a) > (__b) ? (__a) : (__b))

int result;

void __max_read_and_solve(void) {
	int i;
	int x;

	for (i = 0; i < 7; i++) {
		cin >> x;
		result = max(result, x);
	}
}

void __max_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__max_read_and_solve();
	__max_print_result();

	return 0;
}
