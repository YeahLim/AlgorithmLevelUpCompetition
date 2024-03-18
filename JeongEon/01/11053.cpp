// 백준 알고리즘 스터디 9회차
// 문제 번호: 11053번
// 문제 이름: 가장 긴 증가하는 부분 수열
// 알고리즘: 
// 작성일: 24.03.18

#include <iostream>
#include <vector>

using namespace std;

int N;	// 수열의 크기
vector<int> A;
vector<int> B(1001, 1);


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
			if (A[i] > A[j])
				B[i] = max(B[j] + 1, B[i]);
		}
	}

	// 출력
	int ans = 0;
	for (int i = 0; i < N; i++)
		ans = max(ans, B[i]);
	cout << ans;

	return 0;
}