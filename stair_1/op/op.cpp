#include <iostream>

using namespace std;

int a, b;

void __op_read(void) {
	cin >> a >> b;
}

#define __op_print_operator(op) \
    cout << a << #op << b << '=' << a op b << endl;

void __op_solve_and_print_result(void) {
	__op_print_operator(+);
	__op_print_operator(-);
	__op_print_operator(*);
	__op_print_operator(/);
	__op_print_operator(%);
}

int main(int argc, char *argv[]) {
	__op_read();
	__op_solve_and_print_result();

	return 0;
}
