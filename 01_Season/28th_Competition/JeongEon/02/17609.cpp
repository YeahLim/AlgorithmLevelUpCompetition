#include <iostream>
#include <string>
#include <stack>

using namespace std;

int isPalindrome(string input, int left, int right, bool del) {
	while (left < right) {
		if (input[left] != input[right]) {
			if (del == false) {
				if (isPalindrome(input, left + 1, right, true) == 0 || isPalindrome(input, left, right - 1, true) == 0) {
					return 1;
				}
				else {
					return 2;
				}
			}
			else {
				return 2;
			}
		}
		else {
			left++;
			right--;
		}
	}
	return 0;
}

int main(void) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string input;
		cin >> input;
		cout << isPalindrome(input, 0, input.length() - 1, false) << '\n';
	}
	return 0;
}
