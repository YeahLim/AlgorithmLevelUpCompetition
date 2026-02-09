// 코테 알고리즘 스터디 17회차
// SWEA D3
// 2817. 부분 수열의 합

#include <iostream>
#include <string>

using namespace std;

int N, K;
int arr[20];
int answer;

void cal_sum(int idx, int sum) {
	if (sum > K) {
		return;
	}

	if (sum == K) {
		answer++;
		return;
	}

	for (int i = idx; i < N; i++) {
		cal_sum(i + 1, sum + arr[i]);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;


	for (int tc = 1; tc <= TC; tc++) {
		cin >> N >> K;

		answer = 0;

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}

		cal_sum(0, 0);

		cout << "#" << tc << " ";
		cout << answer << '\n';
	}

	return 0;
}