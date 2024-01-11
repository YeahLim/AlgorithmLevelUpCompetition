// 백준 1620번 <나는야 포켓몬 마스터 이다솜>
// 알고리즘 : 맵
#include <iostream>
#include <map>
#include <string>
using namespace std;

bool isNum(string str) {
	if (atoi(str.c_str()) != 0) {
		return true;
	}
	else {
		return false;
	}
}

int main(void) {
	// 입력부
	int N, M;
	cin >> N >> M;

	string input;
	map<string, int> Dogam_name;
	map<int, string> Dogam_num;
	for (int i = 1; i < N + 1; i++) {
		cin >> input;
		Dogam_name.insert({ input, i });
		Dogam_num.insert({ i, input });
	}

	string* str = new string[M];
	for (int i = 0; i < M; i++) {
		cin >> str[i];
	}

	// 출력부
	for (int i = 0; i < M; i++) {
		if (isNum(str[i])) {
			cout << Dogam_num[atoi(str[i].c_str())] << '\n';
		}
		else {
			cout << Dogam_name[str[i]] << '\n';
		}
	}
	return 0;
}