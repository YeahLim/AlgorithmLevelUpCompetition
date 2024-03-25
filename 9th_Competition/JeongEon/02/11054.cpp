// 백준 알고리즘 스터디 9회차
// 문제 번호: 11054번
// 문제 이름: 가장 긴 바이토닉 부분 수열
// 알고리즘: 
// 작성일: 24.03.18

#include <iostream>
#include <vector>

using namespace std;

int N;	// 수열의 크기
vector<int> A;
vector<int> rise(1001, 1);
vector<int> fall(1001, 1);


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N;

	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}

	// 코드
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				rise[i] = max(rise[j] + 1, rise[i]);
			}
		}
	}

	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j > i; j--) {
			if (A[i] > A[j]) {
				fall[i] = max(fall[j] + 1, fall[i]);
			}
		}
	}


	// 출력
	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(ans, rise[i] + fall[i]);
	}

	cout << ans - 1 << '\n';

	return 0;
}