#include <iostream>

using namespace std;

int y, m, d;
bool result;

void __saju_read(void) {
	cin >> y >> m >> d;
}

void __saju_solve(void) {
	result = !((y + m + d) % 10);
}

void __saju_print_result(void) {
	cout << (result ? "운수대통!" : "노력하세요!") << endl;
}

int main(int argc, char *argv[]) {
	__saju_read();
	__saju_solve();
	__saju_print_result();

	return 0;
}
