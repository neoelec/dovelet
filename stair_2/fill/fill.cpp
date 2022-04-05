#include <iostream>

using namespace std;

float speed, weight, strength;

bool __fill_is_wide_receiver(void) {
	return (speed <= 4.5) && (weight >= 150.0) && (strength >= 200.0);
}

bool __fill_is_lineman(void) {
	return (speed <= 6.0) && (weight >= 300.0) && (strength >= 500.0);
}

bool __fill_is_quaterback(void) {
	return (speed <= 5.0) && (weight >= 200.0) && (strength >= 300.0);
}

void __fill_read(void) {
	cin >> speed >> weight >> strength;
}

void __fill_solve_and_print_result(void) {
	int pos = 0;

	if (__fill_is_wide_receiver()) {
		pos++;
		cout << "Wide Receiver";
	}

	if (__fill_is_lineman()) {
		if (pos++)
			cout << ' ';

		cout << "Lineman";
	}

	if (__fill_is_quaterback()) {
		if (pos++)
			cout << ' ';

		cout << "Quarterback";
	}

	if (!pos)
		cout << "No positions";

	cout << endl;
}

int main(int argc, char *argv[]) {
	__fill_read();
	__fill_solve_and_print_result();

	return 0;
}
