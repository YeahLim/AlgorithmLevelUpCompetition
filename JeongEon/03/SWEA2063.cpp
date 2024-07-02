#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	vector<int> vec;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;

		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	int pos = vec.size() / 2;
	cout << vec[pos] << '\n';

	return 0;
}
