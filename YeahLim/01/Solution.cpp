#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    answer[0] = gcd(n, m);
    answer[1] = n * m / answer[0];
    return answer;
}