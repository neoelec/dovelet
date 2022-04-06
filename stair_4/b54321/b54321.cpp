#include <iostream>

using namespace std;

int n;

void __b54321_read(void) {
	cin >> n;
}

void ____b54321_solve(int x) {
	int i;

	for (i = 0; i < (n - x); i++)
		cout << ' ';

	for (i = x; i >= 1; i--)
		cout << i;

	cout << endl;
}

void __b54321_solve_and_print(void) {
	int i;

	for (i = n; i >= 1; i--)
		____b54321_solve(i);
}

int main(int argc, char *argv[]) {
	__b54321_read();
	__b54321_solve_and_print();

	return 0;
}
