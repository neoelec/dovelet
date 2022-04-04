#include <iostream>

using namespace std;

int a, b;

int ascending, descending;

void __note_init(void) {
	ascending = 0;
	descending = 0;
}

void __note_read_and_solve(void) {
	cin >> a;

	for (register int i = 1; i < 8; i++) {
		cin >> b;

		if (a < b)
			ascending = 1;
		else if (a > b)
			descending = 1;

		a = b;
	}
}

void __note_print_result(void) {
	char str_ascending[] = "ascending";
	char str_descending[] = "descending";;
	char str_mixed[] = "mixed";
	char *message;

	if (ascending == descending)
		message = str_mixed;
	else if (ascending)
		message = str_ascending;
	else if (descending)
		message = str_descending;

	cout << message << endl;
}

int main(int argc, char *argv[]) {
	__note_read_and_solve();
	__note_print_result();

	return 0;
}
