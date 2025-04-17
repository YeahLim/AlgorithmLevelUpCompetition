#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    
    vector<int> answer;
    
    // 1. yellow (x * y) 형식으로 나타내기
    for (int i = 1; i * i <= yellow; i++) {
        if (yellow % i == 0) {
            int x = yellow / i;
            int y = i;
            // 2. (x+2) * (y+2) - yellow = brown인 경우 찾기
            if ((x+2) * (y+2) - yellow == brown) {
                answer.push_back(x+2); // 가로
                answer.push_back(y+2); // 세로
                break;
            }
        }
    }
        
    return answer;
}