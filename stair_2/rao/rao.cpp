#include <iostream>

using namespace std;

#define max(__a, __b)	(((__a) > (__b)) ? (__a) : (__b))

int a, b, c;
int result;

void __rao_read(void) {
	cin >> a >> b >> c;

	a *= a;
	b *= b;
	c *= c;
}

void __rao_solve(void) {
	result = (a + b + c) - (2 * max(a, max(b, c)));
}

void __rao_print_result(void) {
	cout << (result == 0 ? "right" : (result < 0 ? "obtuse" : "acute")) << endl;
}

int main(int argc, char *argv[]) {
	__rao_read();
	__rao_solve();
	__rao_print_result();

	return 0;
}
