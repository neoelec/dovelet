#include <iostream>

using namespace std;

int b, w;
bool is_white;

void __can_read(void) {
	cin >> b >> w;
}

void __can_solve(void) {
	is_white = !!(w % 2);
}

void __can_print_result(void) {
	cout << (is_white ? "white" : "black") << endl;
}

int main(int argc, char *argv[]) {
	__can_read();
	__can_solve();
	__can_print_result();
	return 0;
}
