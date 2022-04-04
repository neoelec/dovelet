#include <iostream>

using namespace std;

int c, k;
int result;

int __slatkisi_pow(int a, int b) {
	int ret = 1;

	while (b) {
		if (b & 1)
			ret = ret * a;

		a = a * a;
		b = b / 2;
	}

	return ret;
}

void __slatkisi_read(void) {
	cin >> c >> k;
}

void __slatkisi_solve(void) {
	int l = __slatkisi_pow(10, k);

	result = (c + l / 2) / l * l;
}

void __slatkisi_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__slatkisi_read();
	__slatkisi_solve();
	__slatkisi_print_result();

	return 0;
}
