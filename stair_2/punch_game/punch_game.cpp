#include <iostream>

using namespace std;

#define max(__a, __b)	((__a) > (__b) ? (__a) : (__b))
#define min(__a, __b)	((__a) < (__b) ? (__a) : (__b))

int a, b, c, d, e;
int count;
int score;

void __punch_game_read(void) {
	cin >> a >> b >> c >> d >> e;
}

void __punch_game_solve(void) {
	count = a + b + c + d +e;

	score = (10 * a) + (15 * b) + (30 * c) + (40 * d) + (45 * e);
}

void __punch_game_print_result(void) {
	if (count > 10)
		cout << "time out" << endl;
	else if (score >= 100)
		cout << "you win" << endl;
	else
		cout << "game over" << endl;
}

int main(int argc, char *argv[]) {
	__punch_game_read();
	__punch_game_solve();
	__punch_game_print_result();

	return 0;
}
