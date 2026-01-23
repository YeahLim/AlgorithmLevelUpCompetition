#include <iostream>
#include <string>

using namespace std;

int main(void) {
	double sum_score = 0.0f;
	double sum = 0.0f;
	for (int i = 0; i < 20; i++) {
		string input;
		double score;
		string grade;
		cin >> input >> score >> grade;
		if (grade[0] == 'P') {
			continue;
		}

		double g_score = 0;
		switch (grade[0]) {
		case 'A':
			g_score += 4.0f;
			break;
		case 'B':
			g_score += 3.0f;
			break;
		case 'C':
			g_score += 2.0f;
			break;
		case 'D':
			g_score += 1.0f;
			break;
		case 'F':
			g_score += 0.0f;
			break;
		default:
			break;
		}

		if (grade[0] != 'F') {
			if (grade[1] == '+') {
				g_score += 0.5f;
			}
		}
		sum_score += score;
		sum += score * g_score;
	}
	if (sum != 0 && sum_score != 0) {
		cout << sum / sum_score << '\n';
	}
	else {
		cout << "0.000000\n";
	}

	return 0;
}
