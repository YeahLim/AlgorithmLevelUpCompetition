#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string N;
	cin >> N;

	int sum = 0;
	for (int i = 0; i < N.length(); i++) {
		int tmp = N[i] - '0';
		sum += tmp;
	}

	cout << sum << '\n';

	return 0;
}
