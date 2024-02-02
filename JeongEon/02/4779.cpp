// <백준>
// 문제번호: 4779번
// 문제이름: 칸토어 집합
// 알고리즘: 재귀
// 마지막 수정일: 24.02.03

#include <iostream>
#include <cmath>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void print(char* arr, int size);	// 결과 출력 함수
void cantor(char* arr, int size, int N);	// 칸토어 집합 만드는 함수

int main(void) {

	while (1) {
		int N;	// 입력) 제외하는 횟수
		cin >> N;

		if (cin.eof()) {	// 무한루프 탈출 조건식: 파일의 끝
			break;
		}

		int size = (int)pow(3, N);	// 칸토어 집합 길이는 3의 제곱으로 정해짐
		char* arr = new char[size];	// 칸토어 집합
		for (int i = 0; i < size; i++) {	// 칸토어 집합 초기화
			arr[i] = '-';
		}

		cantor(arr, size, N - 1);
		print(arr, size);
	}

	return 0;
}

void print(char* arr, int size) {	// 결과 출력 함수
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << '\n';
}

void cantor(char* arr, int size, int N) {	// 칸토어 집합 만드는 함수
	if (N >= 0) {
		int cnt = 0;
		bool erase = false;
		for (int i = 0; i < size; i++) {
			if (erase) {
				cnt++;
				arr[i] = ' ';
				if (cnt >= pow(3, N)) {
					cnt = 0;
					erase = false;
					continue;
				}
			}
			else {
				cnt++;
				if (cnt >= pow(3, N)) {
					cnt = 0;
					erase = true;
					continue;
				}
			}
		}

		N--;
		cantor(arr, size, N);
	}
}