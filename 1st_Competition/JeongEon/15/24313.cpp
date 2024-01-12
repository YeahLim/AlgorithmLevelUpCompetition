// 백준 24313번 <알고리즘 수업 - 점근적 표기 1>
// 알고리즘 : 수학
#include <iostream>

using namespace std;

int main(void) {
	int a1, a0, c, n0;
	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	if ((((a1 * n0) + a0) <= c * n0) && a1 <= c) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}