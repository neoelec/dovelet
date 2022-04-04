#include <iostream>

using namespace std;

unsigned long long n;
unsigned long long result;

void __joana_read(void) {
	cin >> n;
}

void __joana_solve(void) {
	unsigned long long last = (n + 1ULL) * (n + 1ULL) / 2ULL - 1ULL;

	result = last * 3ULL - 6ULL;
}

void __joana_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__joana_read();
	__joana_solve();
	__joana_print_result();

	return 0;
}
