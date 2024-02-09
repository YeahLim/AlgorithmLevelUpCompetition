// <백준>
// 문제번호: 11660번
// 문제이름: 구간 합 구하기 5
// 알고리즘: 누적합
// 마지막 수정일: 24.02.06

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력부
	int N;	// 표의 크기
	int M;	// 합을 구해야하는 횟수
	cin >> N >> M;

	int arr[1025][1025] = { 0 };	// 표 + 0으로 초기화
	for (int i = 1; i <= N; i++) {	// 표 입력(1부터 N까지)
		for (int j = 1; j <= N; j++) {
			int input;
			cin >> input;
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + input;
		}
	}

	// 출력부
	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int result = arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1];
		cout << result << '\n';
	}

	return 0;
}