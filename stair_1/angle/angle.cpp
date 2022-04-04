#include <iostream>

using namespace std;

int n;
int in, out;

void __angle_read(void) {
	cin >> n;
}

void __angle_solve(void) {
	in = 180 * (n - 2);
	out = 180 * n - in;
}

void __anggle_print_result(void) {
	cout << in << ' ' << out << endl;
}

int main(int argc, char *argv[]) {
	__angle_read();
	__angle_solve();
	__anggle_print_result();

	return 0;
}
