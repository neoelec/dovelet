#include <iostream>

using namespace std;

int r, e, c;
int result;

void __hack_read(void) {
	cin >> r >> e >> c;
}

void __hack_solve(void) {
	result = r - (e - c);
}

void __hack_print_result(void) {
	if (result < 0)
		cout << "advertise";
	else if (result > 0)
		cout << "do not advertise";
	else
		cout << "does not matter";

	cout << endl;
}

int main(int argc, char *argv[]) {
	__hack_read();
	__hack_solve();
	__hack_print_result();

	return 0;
}
