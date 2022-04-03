#include <iostream>

using namespace std;

int h_in, m_in;
int h_out, m_out;

void __coci_spa_read(void) {
	cin >> h_in >> m_in;
}

void __coci_spa_solve(void) {
	int minute = (h_in + 24) * 60 + m_in - 45;

	h_out = (minute / 60) % 24;
	m_out = minute % 60;
}

void __coci_spa_print_result(void) {
	cout << h_out << ' ' << m_out << endl;
}

int main(int argc, char *argv[]) {
	__coci_spa_read();
	__coci_spa_solve();
	__coci_spa_print_result();

	return 0;
}
