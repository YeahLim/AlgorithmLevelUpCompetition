// 백준 10430번 <나머지>
// 알고리즘 : 사칙연산
#include <iostream>

using namespace std;

int main(void) {
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	return 0;
}