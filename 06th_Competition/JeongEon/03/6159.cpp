// 백준 알고리즘 스터디 6회차
// 문제 번호: 6159번
// 문제 이름: Costume Party
// 알고리즘: 투 포인터
// 작성일: 24.02.27

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;	// 존이 데리고 있는 소의 마리 수
	int S;	// 존이 가지고 있는 의상의 길이
	cin >> N >> S;

	int input;
	vector<int> cow;
	for (int i = 0; i < N; i++) {
		cin >> input;
		cow.push_back(input);
	}

	// 오름차순으로 정렬
	sort(cow.begin(), cow.end());

	int cow1 = 0;	// 1번 소
	int cow2 = 1;	// 2번 소
	int cnt = 0;	// 의상에 들어가는 두마리 소

	while (cow1 < N && cow2 < N) {
		if (cow[cow1] + cow[cow2] <= S) {
			cnt++;
		}

		if (cow2 < N - 1) {
			cow2++;
		}
		else if (cow1 < N) {
			cow1++;
			cow2 = cow1 + 1;
		}
	}

	cout << cnt;

	return 0;
}