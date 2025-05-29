#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    
    // 종류별 개수 세기
    unordered_map<int, int> tang_type;
    for (int& tang : tangerine) {
        tang_type[tang]++;
    }
    
    // 개수 많은 순으로 정렬
    vector<pair<int, int>> sorted_tang(tang_type.begin(), tang_type.end());
    sort(sorted_tang.begin(), sorted_tang.end(), [](const pair<int, int>& a, const pair<int, int>&b) { return a.second > b.second;});
    
    // K개 고르기
    int answer = 0;
    int sum = 0;
    for (pair<int, int>& tang: sorted_tang) {
        answer++;
        sum += tang.second;
        if (sum >= k) {
            break;
        }
    }
    
    return answer;
}