#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (char c : s) {
        if (c == ' ') {
            answer += c;
        }
        
        else if (c >= 'a' && c <= 'z') {
            int rest = (c + n - 'a') % 26;
            answer += char(rest + 'a');
        }
        
        else if (c >= 'A' && c <= 'Z') {
            int rest = (c + n - 'A') % 26;
            answer += char(rest + 'A');
        }
    }
    
    return answer;
}