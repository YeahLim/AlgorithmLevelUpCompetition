#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    set<int> total;
    
    // 전체 길이만큼 반복
    for (int i = 1; i <= elements.size(); i++) {
        
        for (int j = 0; j < elements.size(); j++) {
            int count = 0;
            for (int k = j; k < i + j; k++) {
                count += elements[k % elements.size()];
            }
            total.insert(count);
        }
    }
    
    return total.size();
}