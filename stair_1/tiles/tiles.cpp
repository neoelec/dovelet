#include <iostream>

using namespace std;

int r, c;
int whole, part;

void __tiles_read(void) {
	cin >> r >> c;
}

void __tiles_solve(void) {
	whole = (r / 8) * (c / 8);
	part = ((r / 8) + !!(r % 8)) * ((c / 8) + !!(c % 8)) - whole;
}

void __tiles_print_result(void) {
	cout << "The number of whole tiles is " << whole << " part tiles is " << part << endl;
}

int main(int argc, char *argv[]) {
	__tiles_read();
	__tiles_solve();
	__tiles_print_result();

	return 0;
}
