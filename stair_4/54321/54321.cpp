#include <iostream>

using namespace std;

int n;

void __54321_read(void) {
	cin >> n;
}

void ____54321_solve(int x) {
	int i;

	for (i = x; i >= 1; i--)
		cout << i;

	cout << endl;
}

void __54321_solve_and_print(void) {
	int i;

	for (i = n; i >= 1; i--)
		____54321_solve(i);
}

int main(int argc, char *argv[]) {
	__54321_read();
	__54321_solve_and_print();

	return 0;
}
