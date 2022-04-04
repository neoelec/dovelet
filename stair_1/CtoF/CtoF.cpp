#include <iostream>

using namespace std;

int celsius;
int result;

void __c_to_f_read(void) {
	cin >> celsius;
}

void __c_to_f_solve(void) {
	result = (celsius * 10 * 9) / 5 + 320;
}

void __c_to_f_print_result(void) {
	int x = result / 10;
	int y = result % 10;

	cout << x << '.' << y << endl;
}

int main(int argc, char *argv[]) {
	__c_to_f_read();
	__c_to_f_solve();
	__c_to_f_print_result();

	return 0;
}
