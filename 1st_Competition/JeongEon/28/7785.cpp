// 백준 7785번 <회사에 있는 사람>
// 알고리즘 : 맵
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
	// 입력부
	int n;
	cin >> n;

	pair<string, string> input;
	map<string, string, greater<>> Giggle;
	for (int i = 0; i < n; i++) {
		cin >> input.first >> input.second;
		Giggle[input.first] = input.second;
	}

	// 출력부
	for (map<string, string>::iterator itr = Giggle.begin(); itr != Giggle.end(); itr++) {
		if (itr->second == "enter") {
			cout << itr->first << '\n';
		}
	}

	return 0;
}