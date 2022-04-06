#include <iostream>

using namespace std;

int n;

void __printe_read(void) {
	cin >> n;
}

void __printe_horizontal(void) {
	int i;

	for (i = 0; i < n; i++)
		cout << '*';

	cout << endl;
}

void __printe_vertical(void) {
	int i;

	for (i = 0; i < (n / 2 - 1); i++)
		cout << '*' << endl;
}

void __printe_solve_and_print_result(void) {
	__printe_horizontal();
	__printe_vertical();
	__printe_horizontal();
	__printe_vertical();
	__printe_horizontal();
}

int main(int argc, char *argv[]) {
	__printe_read();
	__printe_solve_and_print_result();

	return 0;
}
