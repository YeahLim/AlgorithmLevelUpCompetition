// 백준 알고리즘 스터디 6회차
// 문제 번호: 1450번
// 문제 이름: 냅색문제
// 알고리즘: 이분탐색
// 작성일: 24.03.01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
vector <ll>  v;

void dfs(int start, int end, vector <ll>& part, ll sum);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N, C;	// 물건 개수, 가방 크기
	cin >> N >> C;

	ll input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		v.push_back(input);
	}

	// 로직
	vector <ll> part1;
	vector <ll> part2;
	dfs(0, N / 2 - 1, part1, 0);
	dfs(N / 2, N - 1, part2, 0);

	sort(part2.begin(), part2.end());

	int cnt = 0;
	for (int i = 0; i < part1.size(); i++) {
		ll x = C - part1[i];
		cnt += upper_bound(part2.begin(), part2.end(), x) - part2.begin();
	}

	// 출력) 가방에 넣는 방법의 수
	cout << cnt;
}

void dfs(int start, int end, vector <ll>& part, ll sum) {
	if (start > end) {
		part.push_back(sum);
		return;
	}
	else {
		dfs(start + 1, end, part, sum);
		dfs(start + 1, end, part, sum + v[start]);
	}
}