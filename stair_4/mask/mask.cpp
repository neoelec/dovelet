#include <iostream>

using namespace std;

bool ____mask_solve(int a, int b, int c) {
	int x, y, z;

	x = 100 * a + 10 * b + c;
	y = 100 * c + 10 * c + a;
	z = 1000 + 100 * a + 10 * b + 2;

	return (x + y) == z;
}

void __mask_solve_and_print_result(void) {
	int a, b, c;

	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			for (c = 1; c <= 9; c++) {
				if (____mask_solve(a, b, c))
					cout << a << b << c << endl;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	__mask_solve_and_print_result();

	return 0;
}
