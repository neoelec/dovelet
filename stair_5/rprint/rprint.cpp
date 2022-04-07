#include <iostream>

using namespace std;

#define MAX_N		10000

int n;
int buf[MAX_N + 1];

void __rprint_read(void) {
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> buf[i];
}

void __rprint_solve_and_print_result(void) {
	cout << buf[n];

	for (int i = n - 1; i >= 1; i--)
		cout << ' ' << buf[i];

	cout << endl;
}

int main(int argc, char *argv[]) {
	__rprint_read();
	__rprint_solve_and_print_result();

	return 0;
}
