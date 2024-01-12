// 백준 10816번 <숫자 카드 2>
// 알고리즘 : 맵, 이분 탐색
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main(void) {
	// 이거 없으면 느리넹.. ㅎ
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int N;
	cin >> N;

	int* SangGeun = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> SangGeun[i];
	}

	stable_sort(SangGeun, SangGeun + N);

	int M;
	cin >> M;

	int input;
	for (int i = 0; i < M; i++) {
		cin >> input;
		cout << upper_bound(SangGeun, SangGeun + N, input) - lower_bound(SangGeun, SangGeun + N, input) << " ";
	}

	/*
	// 입력부
	int N;
	cin >> N;

	int input;
	multimap <int, int> SangGeun;
	for (int i = 0; i < N; i++) {
		cin >> input;
		SangGeun.insert({input, 1});
	}

	int M;
	cin >> M;
	map <int, int> compare;
	for (int i = 0; i < M; i++) {
		cin >> input;
		compare.insert({ i, input });
	}

	// 출력부
	for (int i = 0; i < M; i++) {
		// 여기가 반복문이 하나 더 있어서 시간 초과
		cout << SangGeun.count(compare[i]) << " ";
	}
	*/

	return 0;
}