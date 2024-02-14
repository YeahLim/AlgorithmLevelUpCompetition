// 백준 알고리즘 스터디 4회차
// 문제 번호: 1541번
// 문제 이름: 잃어버린 괄호
// 알고리즘: 그리디 알고리즘
// 작성일: ~24.02.14

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// 입력
	string str;	// 식
	cin >> str;

	int result = 0;	// 결과값
	bool minus = false;	// 음수(-) 판별
	string num;	// 식에서 나오는 숫자
	for (int i = 0; i <= str.size(); i++) {
		// 숫자가 아닌, 연산자거나 식이 끝났다면
		if (str[i] == '-' || str[i] == '+' || i == str.size()) {
			if (minus == true) {
				result -= stoi(num);
			}

			if (minus == false) {
				result += stoi(num);
			}

			num = "";
		}
		// 숫자라면
		else {
			num += str[i];
		}

		// 음수(-)기호를 만났다면
		if (str[i] == '-') {	// 마지막에 있는 이유) 숫자 계산을 원활하게 하기 위해서
			minus = true;
		}
	}

	// 출력) 식의 최소 결과값	
	cout << result;

	return 0;
}