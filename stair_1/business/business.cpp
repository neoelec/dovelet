#include <iostream>

using namespace std;

int N, M, P, C;
int result;

void __business_read(void) {
	cin >> N >> M >> P >> C;
}

void __business_solve(void) {
	result = N - M + P;
}

void __business_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__business_read();
	__business_solve();
	__business_print_result();

	return 0;
}
