// <백준>
// 문제번호: 24060번
// 문제이름: 알고리즘 수업 - 병합 정렬 1
// 알고리즘: 재귀, 정렬
// 마지막 수정일: 24.02.02

#include <iostream>
#include <cmath>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void Merge(int* arr, int p, int q, int r);
void Merge_Sort(int* arr, int p, int r);
int cnt = 0;
int N;	// 입력) 배열의 크기
int K;  // 입력) 저장 횟수

int main(void) {
	cin >> N >> K;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	Merge_Sort(arr, 0, N - 1);

	if (cnt < K) {
		cout << -1;
	}

	delete[] arr;
	return 0;
}

void Merge(int* arr, int p, int q, int r) {
	int* sort = new int[N];
	int i = p;
	int j = q + 1;
	int t = 0;

	while (i <= q && j <= r) {
		if (arr[i] <= arr[j]) {
			sort[t] = arr[i];
			t++; i++;
		}
		else {
			sort[t] = arr[j];
			t++; j++;
		}
	}

	if (i > q) {
		while (j <= r) {
			sort[t] = arr[j];
			t++; j++;
		}
	}
	else {
		while (i <= q) {
			sort[t] = arr[i];
			t++; i++;
		}
	}

	for (i = p, t = 0; i <= r; i++, t++) {
		arr[i] = sort[t];
		cnt++;
		if (cnt == K) {
			cout << arr[i];
			break;
		}
	}

	delete[] sort;
}

void Merge_Sort(int* arr, int p, int r) {
	if (p < r) {
		int q = (int)floor((p + r) / 2);

		Merge_Sort(arr, p, q);
		Merge_Sort(arr, q + 1, r);
		Merge(arr, p, q, r);
	}
}