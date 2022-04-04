#include <iostream>

using namespace std;

#define CAR_HEGIHT  168

bool result;
int tunnel_height;

void __truck_read_and_solve(void) {
	for (register int i = 0; i < 3; i++) {
		cin >> tunnel_height;
		if (tunnel_height <= CAR_HEGIHT) {
			result = false;
			return;
		}
	}

	result = true;
}

void __truck_print_result(void) {
	if (result)
		cout << "NO CRASH";
	else
		cout << "CRASH " << tunnel_height;

	cout << endl;
}

int main(int argc, char *argv[]) {
	__truck_read_and_solve();
	__truck_print_result();

	return 0;
}
