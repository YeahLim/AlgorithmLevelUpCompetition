#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> vec;
    for (int i = 0; i < score.size(); i++) {
        vec.push_back(score[i]);
        sort(vec.begin(), vec.end(), greater<int>());
        answer.push_back(i < k ? vec[i] : vec[k-1]);
    }
    
    return answer;
}