#include <iostream>

using namespace std;

#define WOOD_PER_HORSE  1000

int nr_horse;
int nr_wood;
bool result;

void __troy_read(void) {
	cin >> nr_horse >> nr_wood;
}

void __troy_solve(void) {
	result = (nr_horse * WOOD_PER_HORSE) <= nr_wood;
}

void __troy_print_result(void) {
	if (result)
		cout << 'O';
	else
		cout << 'X';

	cout << endl;
}

int main(int argc, char *argv[]) {
	__troy_read();
	__troy_solve();
	__troy_print_result();

	return 0;
}
