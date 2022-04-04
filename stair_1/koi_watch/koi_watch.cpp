#include <iostream>

using namespace std;

int second, minute, hour;
int time_to_cook;

void __koi_read(void) {
	cin >> hour >> minute >> second;
	cin >> time_to_cook;
}

void __koi_solve(void) {
	minute += hour * 60;
	second += minute * 60;
	second += time_to_cook;

	minute = second / 60;
	second = second % 60;

	hour = minute / 60;
	minute = minute % 60;

	hour = hour % 24;
}

void __koi_print_result(void) {
	cout << hour << ' ';
	cout << minute << ' ';
	cout << second << endl;
}

int main(int argc, char *argv[]) {
	__koi_read();
	__koi_solve();
	__koi_print_result();

	return 0;
}
