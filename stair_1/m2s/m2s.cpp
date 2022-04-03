#include <iostream>

using namespace std;

int minutes;
int seconds;

void __m2s_read(void) {
	cin >> minutes;
}

void __m2s_solve(void) {
	seconds = minutes * 60;
}

void __m2s_print_result(void) {
	cout << minutes << " minutes is ";
	cout << seconds << " seconds." << endl;
}

int main(int argc, char *argv[]) {
	__m2s_read();
	__m2s_solve();
	__m2s_print_result();
}
