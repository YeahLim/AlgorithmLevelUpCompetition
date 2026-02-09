// 백준 1008번 <A/B>
// 알고리즘 : 사칙연산
#include <iostream>

using namespace std;

int main(void) {
	double A, B;
	cin >> A >> B;

	cout.precision(9);
	cout << fixed;
	cout << A / B << endl;

	return 0;
}