// 백준 2941번 <크로아티아 알파벳>
// 알고리즘 : 문자열, 구현
#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	char word[101];
	cin >> word;

	char c = 'c';	char eq = '=';	char mi = '-';	char d = 'd';	char z = 'z';
	char l = 'l';	char j = 'j';	char n = 'n';	char s = 's';
	int cnt = 0;	int i = 0;
	for (int i = 0; i < 101; i++) {
		if (word[i] == NULL) {
			break;
		}
		if (word[i] == d && word[i + 1] == z && word[i + 2] == eq) {
			cnt++;	i += 2;
		}
		else if ((word[i] == c && word[i + 1] == eq) || (word[i] == c && word[i + 1] == mi) || (word[i] == d && word[i + 1] == mi) ||
			(word[i] == l && word[i + 1] == j) || (word[i] == n && word[i + 1] == j) || (word[i] == s && word[i + 1] == eq) ||
			(word[i] == z && word[i + 1] == eq)) {
			cnt++; i++;
		}
		else {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}