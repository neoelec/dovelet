#include <iostream>

using namespace std;

int x, y;
int result;

#define __min(a, b)		((a) < (b) ? (a) : (b))
#define __max(a, b)		((a) > (b) ? (a) : (b))

void __maxandmin_read(void) {
	cin >> x >> y;
}

void __maxandmin_solve(void) {
	result = __max(__min(x, y), x);
}

void __maxandmin_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__maxandmin_read();
	__maxandmin_solve();
	__maxandmin_print_result();

	return 0;
}
