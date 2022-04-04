#include <iostream>

using namespace std;

int A, B, C;
int result;

void __paintblock_read(void) {
	cin >> A >> B >> C;
}

void __paintblock_solve(void) {
	result = (A - 2) * 4 + (B - 2) * 4 + (C - 2) * 4;
}

void __paintblock_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__paintblock_read();
	__paintblock_solve();
	__paintblock_print_result();

	return 0;
}
