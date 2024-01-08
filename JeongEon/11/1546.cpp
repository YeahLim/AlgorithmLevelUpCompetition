// 백준 1546번 <평균>
// 알고리즘 : 배열, 사칙연산
#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	int M = 0;
	int* score = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (M < score[i]) {
			M = score[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum += ((double)score[i] / M) * 100;
	}

	double average = (double)sum / N;
	cout.precision(9);
	cout << fixed;
	cout << average << endl;

	return 0;
}