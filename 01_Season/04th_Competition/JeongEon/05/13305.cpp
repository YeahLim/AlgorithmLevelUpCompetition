// 백준 알고리즘 스터디 4회차
// 문제 번호: 13305번
// 문제 이름: 주유소
// 알고리즘: 그리디 알고리즘
// 작성일: ~24.02.14

#include <iostream>
#include <climits>

using namespace std;

int main(void) {
	// 입력
	int N;	// 도시의 개수
	cin >> N;

	int* km = new int[N];	// 도시 간 도로 길이
	for (int i = 0; i < N - 1; i++) {
		cin >> km[i];
	}

	int* price = new int[N];	// 각 도시의 유가
	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	int min_price = INT_MAX;
	long long int result = 0;	// 결과값
	for (int i = 0; i < N - 1; i++) {
		if (price[i] < min_price) {
			min_price = price[i];
		}
		result += (long long int)km[i] * (long long int)min_price;
	}

	// 출력) 가장 왼쪽 도시에서 가장 오른쪽 도시로 가는 최소 가격
	cout << result;

	return 0;
}