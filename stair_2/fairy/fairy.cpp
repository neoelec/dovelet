#include <iostream>

using namespace std;

int y;
bool result;

void __fairy_read(void) {
	cin >> y;
}

void __fairy_solve(void) {
	result = y < 2000 ? false : !(y % 8);
}

void __fairy_print_result(void) {
	cout << (result ? 'O' : 'X') << endl;
}

int main(int argc, char *argv[]) {
	__fairy_read();
	__fairy_solve();
	__fairy_print_result();

	return 0;
}
