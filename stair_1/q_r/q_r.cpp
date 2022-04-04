#include <iostream>

using namespace std;

int a, b;

void __q_r_read(void) {
	cin >> a >> b;
}

void __q_r_solve_and_print_result(void) {
	cout << a / b << ' ' << a % b << endl;
}

int main(int argc, char *argv[]) {
	__q_r_read();
	__q_r_solve_and_print_result();

	return 0;
}
