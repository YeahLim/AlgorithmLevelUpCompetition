#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    string answer = s;
    for (int i = 0; i < s.size(); i++) {
        
        // 첫 문자인 경우
        if (i == 0 || s[i-1] == ' ') {
            // 소문자인 경우
            if ('a' <= s[i] && s[i] <= 'z') {
                answer[i] -= 32;
            }
        }
        
        // 첫 문자가 아닌 경우
        else if ('A' <= s[i] && s[i] <= 'Z') {
            answer[i] += 32;
        }
    }
    
    return answer;
}