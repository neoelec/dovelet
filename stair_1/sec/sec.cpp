#include <iostream>

using namespace std;

int seccond, minute, hour, day;

void __sec_read(void) {
	cin >> seccond;
}

void __sec_solve(void) {
	minute = seccond / 60;
	seccond = seccond % 60;

	hour = minute / 60;
	minute = minute % 60;

	day = hour / 24;
	hour = hour % 24;
}

void __sec_print_result(void) {
	cout << day << ' ';
	cout << hour << ' ';
	cout << minute << ' ';
	cout << seccond << endl;
}

int main(int argc, char *argv[]) {
	__sec_read();
	__sec_solve();
	__sec_print_result();

	return 0;
}
