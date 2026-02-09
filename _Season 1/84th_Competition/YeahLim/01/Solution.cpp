#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int cursorCount = INT_MAX;
string name;
int length;
int alphabetCount = 0;

bool checkSearchedAll(vector<int>& searched) {
    for (int i = 0; i < length; i++) {
        if (searched[i] == 0) {
            return false;
        }
    }
    return true;
}

void searchAllCharacters(int index, int count, vector<int>& searched) {
    
    if (count >= length) {
        return;
    }
    
    // 모든 문자를 다 탐색했을 경우
    if (checkSearchedAll(searched)) {
        cursorCount = min(cursorCount, count);
        return;
    }
    
    // 왼쪽으로 탐색  
    int leftIndex = index == 0 ? length - 1 : index - 1;
    searched[leftIndex]++;
    searchAllCharacters(leftIndex, count+1, searched);
    searched[leftIndex]--;
    
    // 오른쪽으로 탐색
    int rightIndex = index == length - 1 ? 0 : index + 1;
    searched[rightIndex]++;
    searchAllCharacters(rightIndex, count+1, searched);
    searched[rightIndex]--;
    
}

int solution(string name) {
    ::name = name;
    length = name.size();
    
    vector<int> searched(length);
    int aCount = 0;
    
    for (int i = 0; i < length; i++) {
        
        alphabetCount += min(name[i] - 'A', 'Z' - name[i] + 1); // A -> 원하는 알파벳으로 변환 개수 구하기
                
        if (name[i] == 'A') {
            searched[i] = 1;
        }
    }
    
    searched[0] = 1;
    searchAllCharacters(0, 0, searched); // 좌우 커서 이동 개수 구하기
    
    return cursorCount + alphabetCount;
}

