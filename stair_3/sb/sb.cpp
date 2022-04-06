#include <iostream>

using namespace std;

#define max(__a, __b)		((__a) > (__b) ? (__a) : (__b))

int top_score;
int result;

void __sb_read_and_solve(void) {
	int i;
	int x;

	for (i = 1; i <= 7; i++) {
		cin >> x;
		if (x == max(top_score, x)) {
			top_score = x;
			result = i;
		}
	}
}

void __sb_print_result(void) {
	cout << result << endl;
}

int main(int argc, char *argv[]) {
	__sb_read_and_solve();
	__sb_print_result();

	return 0;
}
