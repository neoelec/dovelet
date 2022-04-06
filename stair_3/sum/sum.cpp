#include <iostream>

using namespace std;

int result;

void __sum_read_and_solve(void) {
	int i;
	int in;

	for (i = 0; i < 7; i++) {
		cin >> in;
		result += in;
	}
}

void __sum_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__sum_read_and_solve();
	__sum_print_result();

	return 0;
}
