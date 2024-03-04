// 백준 알고리즘 스터디 6회차
// 문제 번호: 4158번
// 문제 이름: CD
// 알고리즘: 투 포인터
// 작성일: 24.02.27

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> result;	// 출력할 결과

	// 입력부
	while (1) {
		int N;	// 상근이가 가지고 있는 CD의 수
		int M;	// 선영이가 가지고 있는 CD의 수 ( 1 <= N, M <= 1,000,000)
		cin >> N >> M;

		if (N == 0 && M == 0) {
			break;
		}

		int input;
		vector<int> arr_G;	// 상근이 CD
		vector<int> arr_Y;	// 선영이 CD
		for (int i = 0; i < N; i++) {
			cin >> input;
			arr_G.push_back(input);
		}
		for (int i = 0; i < M; i++) {
			cin >> input;
			arr_Y.push_back(input);
		}

		// 로직
		int G = 0, Y = 0;	// 상근, 선영 포인터
		int cnt = 0;	// 두 사람이 동시에 가지고 있는 CD의 개수
		while (G < N && Y < M) {
			if (arr_G[G] < arr_Y[Y]) {
				G++;
			}
			else if (arr_Y[Y] < arr_G[G]) {
				Y++;
			}
			else if (arr_G[G] == arr_Y[Y]) {
				cnt++;
				Y++;
				G++;
			}
		}

		result.push_back(cnt);
	}

	// 출력) 두 사람이 동시에 가지고 있는 CD의 개수
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}