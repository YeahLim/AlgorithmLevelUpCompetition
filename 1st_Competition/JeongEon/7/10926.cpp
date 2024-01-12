// 백준 10926번 <??!>
// 알고리즘 : 문자열, 구현
#include <iostream>

using namespace std;

int main(void) {
	char ID[51];	// <--- 이거 왜 51..? 문자열은 소문자이고 길이가 50자를 넘지 않는다고 한다. // 해결) 키보드 입력 개행
	cin >> ID;

	cout << ID << "??!" << endl;

	return 0;
}