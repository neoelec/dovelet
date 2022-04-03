#include <iostream>

using namespace std;

int x, y;

void __area_read(void) {
	cin >> x >> y;
}

void __area_solve_and_print_result(void) {
	cout << x * y << endl;
}

int main(int argc, char *argv[]) {
	__area_read();
	__area_solve_and_print_result();

	return 0;
}
