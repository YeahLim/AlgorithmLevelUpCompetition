// 백준 11478번 <서로 다른 부분 문자열의 개수>
// 알고리즘 : 셋
#include <iostream>
#include <set>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// 입력부
	string input;
	cin >> input;

	set<string> s;
	for (int i = 0; i < input.size(); i++) {
		string str = "";
		for (int j = i; j < input.size(); j++) {
			str += input[j];
			s.insert(str);
		}
	}

	// 출력부
	cout << s.size() << '\n';

	return 0;
}