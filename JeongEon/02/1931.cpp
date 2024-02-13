// 백준 알고리즘 스터디 4회차
// 문제 번호: 1931번
// 문제 이름: 회의실 배정
// 알고리즘: 그리디 알고리즘, 정렬
// 작성일: ~24.02.13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2);

int main(void) {
	// 입력
	int N;	// 회의 수
	cin >> N;

	int start, end;
	vector<pair<int, int>> vec;	// 회의 정보
	for (int i = 0; i < N; i++) {
		cin >> start >> end;	// 시작 시간, 끝나는 시간
		vec.push_back({ start, end });
	}

	sort(vec.begin(), vec.end(), compare);

	int time = vec[0].second;	//	회의 끝나는 시간을 저장
	int cnt = 1;	// 회의의 개수
	for (int i = 1; i < N; i++) {
		if (vec[i].first >= time) {
			time = vec[i].second;
			cnt++;
		}
	}

	// 출력) 회의의 최대 개수	
	cout << cnt;

	return 0;
}

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) {	// 회의 끝나는 시간이 같다면
		return p1.first < p2.first;	// 회의 시작하는 시간을 오름차순으로 정렬
	}
	// 회의 끝나는 시간이 다르다면
	return p1.second < p2.second;	// 회의 끝나는 시간을 오름차순으로 정렬
}