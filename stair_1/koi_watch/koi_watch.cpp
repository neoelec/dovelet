#include <iostream>

using namespace std;

int second, minute, hour;
int time_to_cook;

void __watch_read(void) {
	cin >> hour >> minute >> second;
	cin >> time_to_cook;
}

void __watch_solve(void) {
	minute += hour * 60;
	second += minute * 60;
	second += time_to_cook;

	minute = second / 60;
	second = second % 60;

	hour = minute / 60;
	minute = minute % 60;

	hour = hour % 24;
}

void __watch_print_result(void) {
	cout << hour << ' ';
	cout << minute << ' ';
	cout << second << endl;
}

int main(int argc, char *argv[]) {
	__watch_read();
	__watch_solve();
	__watch_print_result();

	return 0;
}
