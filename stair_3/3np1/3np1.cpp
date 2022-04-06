#include <iostream>

using namespace std;

int n;

void __3np1_read(void) {
	cin >> n;
}

void __3np1_solve_and_print_result(void) {
	cout << n;

	while (n != 1 && n != 0) {
		if (!(n % 2))
			n = n / 2;
		else
			n = n * 3 + 1;

		cout << ' ' << n;
	}

	cout << endl;
}

int main(int argc, char *argv[]) {
	__3np1_read();
	__3np1_solve_and_print_result();

	return 0;
}
