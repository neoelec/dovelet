#include <iostream>

using namespace std;

int n;

void __tri2_read(void) {
	cin >> n;
}

void __tri2_print_1_line(int x) {
	int i;

	for (i = 0; i < x; i++)
		cout << '*';

	cout << endl;
}

void __tri2_solve_and_print_result(void) {
	int i;

	for (i = n; i >= 1; i--)
		__tri2_print_1_line(i);
}

int main(int argc, char *argv[]) {
	__tri2_read();
	__tri2_solve_and_print_result();

	return 0;
}
