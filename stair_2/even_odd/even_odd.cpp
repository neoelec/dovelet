#include <iostream>

using namespace std;

int a, b;

void __even_odd_read(void) {
	cin >> a >> b;
}

#define __evne_odd_to_str(x) (((x) % 2) ? "odd" : "even")

void __even_odd_print_add(void) {
	cout << __evne_odd_to_str(a)
		<< '+' << __evne_odd_to_str(b)
		<< '=' << __evne_odd_to_str(a + b) << endl;
}

void __even_odd_print_multiple(void) {
	cout << __evne_odd_to_str(a)
		<< '*' << __evne_odd_to_str(b)
		<< '=' << __evne_odd_to_str(a * b) << endl;
}

void __even_odd_solve_and_print_result(void) {
	__even_odd_print_add();
	__even_odd_print_multiple();
}

int main(int argc, char *argv[]) {
	__even_odd_read();
	__even_odd_solve_and_print_result();

	return 0;
}
