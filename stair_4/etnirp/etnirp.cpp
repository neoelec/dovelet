#include <iostream>

using namespace std;

int n;

void __etnirp_read(void) {
	cin >> n;
}

void __etnirp_horizontal(void) {
	int i;

	for (i = 0; i < n; i++)
		cout << '*';

	cout << endl;
}

void __etnirp_vertical(void) {
	int i, j;

	for (i = 0; i < (n / 2 - 1); i++) {
		for (j = 1; j < n; j++)
			cout << ' ';

		cout << '*' << endl;
	}
}

void __etnirp_solve_and_print_result(void) {
	__etnirp_horizontal();
	__etnirp_vertical();
	__etnirp_horizontal();
	__etnirp_vertical();
	__etnirp_horizontal();
}

int main(int argc, char *argv[]) {
	__etnirp_read();
	__etnirp_solve_and_print_result();

	return 0;
}
