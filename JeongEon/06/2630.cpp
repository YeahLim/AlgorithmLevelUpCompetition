// 백준 알고리즘 스터디 8회차
// 문제 번호: 2630번
// 문제 이름: 색종이 만들기
// 알고리즘: 분할정복
// 작성일: 24.03.13

#include <iostream>

using namespace std;

int paper[129][129];
int white = 0; // 흰 종이
int blue = 0; // 파란 종이

void cut_paper(int y, int x, int k);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 종이의 한 변 길이
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	// 코드
	cut_paper(0, 0, N);
	cout << white << '\n';
	cout << blue << '\n';


	return 0;
}

void cut_paper(int y, int x, int k) {
	bool cut = false; // 잘라야하는지 
	int first_color = paper[y][x]; // 첫번째칸의 색

	for (int i = y; i < y + k; i++) {
		for (int j = x; j < x + k; j++) {
			if (paper[i][j] != first_color) {
				cut = true;
				break;
			}
		}
	}

	if (cut) { // 잘라야하는 색종이면 
		cut_paper(y, x, k / 2);					// 위쪽에 왼쪽 파트
		cut_paper(y, x + k / 2, k / 2);			//위쪽에 오른쪽 파트
		cut_paper(y + k / 2, x, k / 2);			// 아래쪽에 왼쪽 파트
		cut_paper(y + k / 2, x + k / 2, k / 2); // 아래쪽에 오른쪽 파트
	}
	else {
		if (first_color == 1) // 파란색
			blue++;
		else // 흰색
			white++;
	}
}