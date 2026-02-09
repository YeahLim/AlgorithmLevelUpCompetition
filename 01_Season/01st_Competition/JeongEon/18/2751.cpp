// 백준 2751번 <수 정렬하기 2>
// 알고리즘 : 정렬
#include <iostream>
#include <cstdlib>

using namespace std;

int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int main(void) {
	int N;
	cin >> N;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	qsort(arr, N, sizeof(int), cmp);


	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}