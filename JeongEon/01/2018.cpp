// 백준 알고리즘 스터디 6회차
// 문제 번호: 2018번
// 문제 이름: 수들의 합 5
// 알고리즘: 투 포인터
// 작성일: 24.02.27

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int start = 1;
	int end = 1;
	int cnt = 0;
	int sum = 0;

	while (start <= end && end <= N) {
		if (sum < N) {
			sum += end;
			end++;
		}
		else {
			if (sum == N) {
				cnt++;
			}
			sum -= start;
			start++;
		}
	}

	cout << cnt + 1;

	return 0;
}