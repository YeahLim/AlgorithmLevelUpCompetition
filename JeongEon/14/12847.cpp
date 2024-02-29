// 백준 알고리즘 스터디 6회차
// 문제 번호: 12847번
// 문제 이름: 꿀 아르바이트
// 알고리즘: 슬라이딩 윈도우
// 작성일: 24.03.01

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	// 월세 내는 전날
	int m;	// 일할 수 있는 날
	cin >> n >> m;

	long long int input;
	vector<long long int> money;
	money.push_back(0);
	for (int i = 1; i <= n; i++) {
		cin >> input;
		money.push_back(input + money[i - 1]);	 // 누적합
	}

	// 로직
	long long int best = 0;
	int ptr = m;
	while (ptr <= n) {
		long long int sum = money[ptr] - money[ptr - m];
		if (sum > best) {
			best = sum;
		}

		ptr++;
	}


	// 출력) 준수가 일을 해서 벌 수 있는 최대 이익
	cout << best;

	return 0;
}