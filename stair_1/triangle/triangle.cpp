#include <cstdio>
#include <iostream>

using namespace std;

int a, b;
int area;

void __triangle_read(void) {
	cin >> a >> b;

	a *= 10;
	b *= 10;
}

void __triangle_solve(void) {
	area = a * b / 2;
}

void __triangle_print_result(void) {
	int x = area / 100;
	int y = area % 100;

	printf("%d.%02d\n", x, y);
}

int main(int argc, char *argv[]) {
	__triangle_read();
	__triangle_solve();
	__triangle_print_result();

	return 0;
}
