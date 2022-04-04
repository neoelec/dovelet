#include <iostream>

using namespace std;

int calorie[][5] = {
	{ 0, 461, 431, 420, 0 },
	{ 0, 130, 160, 118, 0 },
	{ 0, 100, 57, 70, 0 },
	{ 0, 167, 266, 75, 0 },
};

int total;

void __calorie_read_and_solve(void) {
	int idx;

	total = 0;

	for (register int i = 0; i < 4; i++) {
		cin >> idx;
		total += calorie[i][idx];
	}
}

void __calorie_print_result(void) {
	cout << "Your total Calorie count is " << total << '.' << endl;
}

int main(int argc, char *argv[]) {
	__calorie_read_and_solve();
	__calorie_print_result();

	return 0;
}
