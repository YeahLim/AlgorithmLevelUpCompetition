#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int N;
	string input;
	vector <string> student_num;
	int length = 1;
	int result;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		reverse(input.begin(), input.end());
		student_num.push_back(input);
	}

	while (1) {
		set <string> s;

		for (int i = 0; i < N; i++) {
			s.insert(student_num[i].substr(0, length));
		}

		if (s.size() == N) {
			break;
		}
		else {
			length++;
		}

	}

	result = length;
	cout << result;

	return 0;
}
