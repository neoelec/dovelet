#include <iostream>

using namespace std;

int n;

void __1ton1_read(void) {
	cin >> n;
}

int __1ton1_sum(int x) {
	int y;

	if (x == 1)
		return 1;

	if (x % 2)
		y = (1 + x - 1) * (x / 2) + x;
	else
		y = (1 + x) * (x / 2);

	return y;
}

void __1ton1_solve_and_print_result(void) {
	int i = 1;

	cout << i++;
	for (; i <= n; i++)
		cout << '+' << i;

	cout << '=' << __1ton1_sum(n) << endl;
}

int main(int argc, char *argv[]) {
	__1ton1_read();
	__1ton1_solve_and_print_result();

	return 0;
}
