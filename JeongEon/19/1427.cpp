// 백준 1427번 <소트인사이드
// 알고리즘 : 정렬
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int num;
	cin >> num;

	char temp;
	string str = to_string(num);
	for (int i = 0; i < str.length(); i++) {
		int check = i;
		for (int j = i; j < str.length(); j++) {
			if (str[check] < str[j]) {
				check = j;
			}
		}
		temp = str[i];
		str[i] = str[check];
		str[check] = temp;
	}

	cout << str;

	return 0;
}