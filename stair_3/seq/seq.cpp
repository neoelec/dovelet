#include <iostream>

using namespace std;

int a, b;

#define min(__a, __b)		((__a) < (__b) ? (__a) : (__b))
#define max(__a, __b)		((__a) > (__b) ? (__a) : (__b))

void __seq_read(void) {
	int __a, __b;

	cin >> __a >> __b;

	a = min(__a, __b);
	b = max(__a, __b);
}

void __seq_solve_and_print_result(void) {
	for (register int i = a; i <= b; i++)
		cout << i << ' ';

	cout << endl;
}

int main(int argc, char *argv[]) {
	__seq_read();
	__seq_solve_and_print_result();

	return 0;
}
