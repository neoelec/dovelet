#include <iostream>

using namespace std;

int n;

void __seq2_read(void) {
	cin >> n;
}

int __seq2_sum(int x) {
	int y;

	if (x == 1)
		return 1;

	if (x % 2)
		y = (1 + x - 1) * (x / 2) + x;
	else
		y = (1 + x) * (x / 2);

	return y;
}

void __seq2_solve_and_print_result(void) {
	int i;

	for (i = 1; i <= n; i++)
		cout << "1.." << i << ' ' << __seq2_sum(i) << endl;
}

int main(int argc, char *argv[]) {
	__seq2_read();
	__seq2_solve_and_print_result();

	return 0;
}
