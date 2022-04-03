#include <iostream>

using namespace std;

int y;
bool result;

void __leap_year_read(void) {
	cin >> y;
}

void __leap_year_solve(void) {
	bool cond_0 = !(y % 4) && (y % 100);
	bool cond_1 = !(y % 400);

	result = cond_0 || cond_1;
}

void __leap_year_print_result(void) {
	cout << (result ? "YES" : "NO") << endl;
}

int main(int arvc, char *argv[]) {
	__leap_year_read();
	__leap_year_solve();
	__leap_year_print_result();

	return 0;
}
