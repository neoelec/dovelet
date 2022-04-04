#include <iostream>

using namespace std;

int nr_computer;
int nr_printer;
int nr_router;

int total_power;

void __fuse_read(void) {
	cin >> nr_computer;
	cin >> nr_printer;
	cin >> nr_router;
}

void __fuse_solve(void) {
	total_power = nr_computer * 5;
	total_power += nr_printer * 4;
	total_power += nr_router * 1;

	total_power = (total_power / 10) * 10 + (total_power % 10 ? 10 : 0);
}

void __fuse_print_result(void) {
	cout << total_power << " amperes" << endl;
}

int main(int argc, char *argv[]) {
	__fuse_read();
	__fuse_solve();
	__fuse_print_result();

	return 0;
}
