#include <iostream>

using namespace std;

int n;

void __tri1_read(void) {
	cin >> n;
}

void __tri1_print_1_line(int x) {
	int i;

	for (i = 0; i < x; i++)
		cout << '*';

	cout << endl;
}

void __tri1_solve_and_print_result(void) {
	int i;

	for (i = 1; i <= n; i++)
		__tri1_print_1_line(i);
}

int main(int argc, char *argv[]) {
	__tri1_read();
	__tri1_solve_and_print_result();

	return 0;
}
