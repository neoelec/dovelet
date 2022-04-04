#include <iostream>

using namespace std;

int input;
int output;
int remain;

void __bottle_read(void) {
	cin >> input;
}

void __bottle_solve(void) {
	output = input + (input / 4) + (input / 4 / 4);
	remain = (input % 4) + (input / 4 % 4);
}

void __bottle_print_result(void) {
	cout << output << ' ' << remain << endl;
}

int main(int argc, char *argv[]) {
	__bottle_read();
	__bottle_solve();
	__bottle_print_result();

	return 0;
}
