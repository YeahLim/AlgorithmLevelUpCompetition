// 백준 18870번 <좌표 압축>
// 알고리즘 : 정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	// 입력부
	int N;
	cin >> N;

	int input;
	vector <int> vec;
	vector <int> cal;
	for (int i = 0; i < N; i++) {
		cin >> input;
		vec.push_back(input);
		cal.push_back(input);
	}

	stable_sort(cal.begin(), cal.end());
	cal.erase(unique(cal.begin(), cal.end()), cal.end());
	// erase( , )는 범위 지우기
	// erase(값)은 값 지우기
	// unique는 중복값 배열 뒷부분으로 보내기


	// 출력부
	for (int i = 0; i < N; i++) {
		cout << lower_bound(cal.begin(), cal.end(), vec[i]) - cal.begin() << " ";
		// lower_boud(vector.begin(), vector.end(), 값)
		// 값보다 크거나 같은 첫번째 원소의 주소값 반환
		// 없다면 end 반환
	}

	return 0;
}
