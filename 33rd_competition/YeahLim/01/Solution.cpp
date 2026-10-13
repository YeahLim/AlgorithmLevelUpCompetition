#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    // 3진법 전환 + 앞뒤 뒤집기
    string result = "";
    
    while (n > 0) {
        result += to_string(n % 3);
        n /= 3;
    }
    
    // 10진법 전환
    int answer = stoi(result, nullptr, 3);
    
    return answer;
}