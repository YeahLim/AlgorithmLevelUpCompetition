#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a) {
        int given = n / a * b;
        answer += given;
        int rest = n % a;
        n = given + rest;
    }
    
    return answer;
}