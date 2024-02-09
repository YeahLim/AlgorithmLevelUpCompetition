// <백준>
// 문제번호: 16139번
// 문제이름: 인간-컴퓨터 상호작용
// 알고리즘: 누적합
// 마지막 수정일: 24.02.06

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력부
	string S;	// 문자열
	cin >> S;

	int number_of_alphabet[200002][27] = { 0 };
	for (int i = 1; i <= S.length(); i++) {
		for (int j = 1; j <= 26; j++) {
			number_of_alphabet[i][j] = number_of_alphabet[i - 1][j];
		}
		int m = S[i - 1] - 'a';
		number_of_alphabet[i][m + 1]++;
	}

	int q;	// 질문의 수
	cin >> q;

	// 출력부
	for (int i = 0; i < q; i++) {
		char alphabet;	int l;	int r;
		cin >> alphabet >> l >> r;

		int m = alphabet - 'a';
		cout << number_of_alphabet[r + 1][m + 1] - number_of_alphabet[l][m + 1] << '\n';
	}


	return 0;
}