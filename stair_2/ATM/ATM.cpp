#include <cstdio>
#include <iostream>

using namespace std;

int x;
float y;
float result;

void __ATM_read(void) {
	cin >> x >> y;
}

void __ATM_solve(void) {
	float z;

	result = y;

	if (x % 5)
		return;

	z = static_cast < float >(x) + 0.5;
	if (y < z)
		return;

	result = y - z;
}

void __ATM_print_result(void) {
	printf("%.2f\n", result);
}

int main(int argc, char *argv[]) {
	__ATM_read();
	__ATM_solve();
	__ATM_print_result();

	return 0;
}
