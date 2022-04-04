#include <iostream>

using namespace std;

char enjoy[] = "enjoy";
char oops[] = "oops";

char *schedule[] = {
	NULL,
	enjoy,
	oops,
	enjoy,
	oops,
	enjoy,
	oops,
	oops,
};

int weekday;

void __swimming_read(void) {
	cin >> weekday;
}

void __swimming_solve_and_print_result(void) {
	cout << schedule[weekday] << endl;
}

int main(int argc, char *argv[]) {
	__swimming_read();
	__swimming_solve_and_print_result();

	return 0;
}
