// <백준>
// 문제번호: 14888번
// 문제이름: 연산자 끼워넣기
// 알고리즘: 백트레킹
// 마지막 수정일: 24.02.03

#include <iostream>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int N;	// 수의 개수
int* arr = new int[11];	// 수
int* oper = new int[4];	// 연산자 (덧셈, 뺄셈, 곱셈, 나눗셈)
int maximum = -1000000001;
int minimum = 1000000001;

void bfs(int result, int idx);

int main(void) {
	// 입력부
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> oper[0] >> oper[1] >> oper[2] >> oper[3];

	// 출력부 -> 결과값의 최대, 최소
	bfs(arr[0], 1);
	cout << maximum << '\n';
	cout << minimum << '\n';

	return 0;
}

void bfs(int result, int idx) {
	if (idx == N) {
		if (result > maximum) {
			maximum = result;
		}
		if (result < minimum) {
			minimum = result;
		}
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (oper[i] > 0) {
			oper[i]--;
			if (i == 0) {
				bfs(result + arr[idx], idx + 1);
			}
			if (i == 1) {
				bfs(result - arr[idx], idx + 1);
			}
			if (i == 2) {
				bfs(result * arr[idx], idx + 1);
			}
			if (i == 3) {
				bfs(result / arr[idx], idx + 1);
			}
			oper[i]++;
		}
	}

}