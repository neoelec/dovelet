#include <iostream>

using namespace std;

#define min(__a, __b)	((__a) < (__b) ? (__a) : (__b))
#define max(__a, __b)	((__a) > (__b) ? (__a) : (__b))

int a, b, c;
int result;

void __med_read(void) {
	cin >> a >> b >> c;
}

void __med_solve(void) {
	result = (a + b + c) - min(a, min(b, c)) - max(a, max(b, c));
}

void __med_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__med_read();
	__med_solve();
	__med_print_result();

	return 0;
}
