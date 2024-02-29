// 백준 알고리즘 스터디 6회차
// 문제 번호: 12891번
// 문제 이름: DNA 비밀번호
// 알고리즘: 슬라이딩 윈도우
// 작성일: 24.02.29

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int S;	// 전체 문자열의 길이
	int P;	// 부분 문자열의 길이
	cin >> S >> P;

	string input;	// 문자열
	cin >> input;

	int A, C, G, T;		// A, C, G, T 개수
	cin >> A >> C >> G >> T;

	// 로직
	map<char, int> DNA;
	DNA.insert({ 'A', 0 });
	DNA.insert({ 'C', 0 });
	DNA.insert({ 'G', 0 });
	DNA.insert({ 'T', 0 });

	for (int i = 0; i < P; i++) {
		DNA.find(input[i])->second++;
	}

	int ptr = 0;
	int cnt = 0;
	while (1) {
		if (DNA['A'] >= A && DNA['C'] >= C && DNA['G'] >= G && DNA['T'] >= T) {
			cnt++;
		}

		if (ptr + 1 + P <= S) {
			DNA.find(input[ptr])->second--;
			ptr++;
			DNA.find(input[ptr + P - 1])->second++;
		}
		else {
			break;
		}
	}

	// 출력) 만들 수 있는 비밀번호의 종류의 수
	cout << cnt;

	return 0;
}