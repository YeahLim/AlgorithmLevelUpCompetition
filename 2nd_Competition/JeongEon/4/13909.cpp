// 백준 13909번 <창문 닫기>
// 알고리즘 : 수학
#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int N, count = 0;
	cin >> N;

	for (int i = 1; i * i <= N; ++i)
		count++;

	// 출력부
	cout << count << '\n';

	return 0;
}