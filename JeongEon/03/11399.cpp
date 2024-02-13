// 백준 알고리즘 스터디 4회차
// 문제 번호: 11399번
// 문제 이름: ATM
// 알고리즘: 그리디 알고리즘, 정렬, 누적합
// 작성일: ~24.02.13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void) {
	// 입력
	int N;	// 사람 수
	cin >> N;

	vector<int> vec;	// 각 사람당 돈을 인출하는 데 걸리는 시간
	int input;			// 벡터에 저장하기 위한 변수
	for (int i = 0; i < N; i++) {
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());	// 인출하는 데 걸리는 시간을 오름차순으로 정렬

	int time = 0;	// 인출 시간의 합 저장
	for (int i = 0; i < N; i++) {	// 그리디
		time += vec[i] * (N - i);	// 자신이 걸리는 시간 + 뒷사람 n-1명에게 걸리는 시간이 소요
	}

	// 누적합 방식
	//int time = vec[0];	// 인출 시간의 합 저장
	//for (int i = 1; i < N; i++) {	// 누적합
	//	vec[i] += vec[i - 1];
	//	time += vec[i];
	//}

	// 출력) 각 사람이 인출하는데 필요한 시간 합의 최솟값
	cout << time;

	return 0;
}