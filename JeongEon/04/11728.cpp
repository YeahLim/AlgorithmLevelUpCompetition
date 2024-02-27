// 백준 알고리즘 스터디 6회차
// 문제 번호: 11728번
// 문제 이름: 배열 합치기
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

	int N;	// A의 배열 크기
	int M;	// B의 배열 크기
	cin >> N >> M;

	int input;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}
	sort(A.begin(), A.end());

	vector<int> B;
	for (int i = 0; i < M; i++) {
		cin >> input;
		B.push_back(input);
	}
	sort(B.begin(), B.end());

	int a = 0;	// 배열 A의 포인터
	int b = 0;	// 배열 B의 포인터
	vector<int> result;
	while (result.size() < N + M) {
		if (a < N && b < M) {
			if (A[a] <= B[b]) {
				result.push_back(A[a]);
				a++;
			}
			else if (B[b] < A[a]) {
				result.push_back(B[b]);
				b++;
			}
		}
		else {
			while (a < N) {
				result.push_back(A[a]);
				a++;
			}

			while (b < M) {
				result.push_back(B[b]);
				b++;
			}
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}