#include <iostream>
#include <string.h>
#include <algorithm>
#define INF 987654321
 
using namespace std;
 
int N, B;
int H[20];
int answer;
 
void makeTower(int index, int sumHeight) {
 
    //종료조건
    if (index == N) {
        if (sumHeight >= B) {
            //결과 갱신
            answer = min(answer, sumHeight);
        }
        return;
    }
 
    //현재 탑을 쌓는 경우 해보기
    makeTower(index + 1, sumHeight + H[index]);
 
    //현재 탑을 쌓지 않는 경우 해보기
    makeTower(index + 1, sumHeight);
}
 
int main() {
 
    int test_case;
    int T;
 
    cin >> T;
 
    for (test_case = 1; test_case <= T; test_case++) {
 
        //초기화
        N = 0, B = 0;
        memset(H, 0, sizeof(H));
        answer = INF;
 
        //입력
        cin >> N >> B;
        for (int i = 0; i < N; i++) {
            cin >> H[i];
        }
 
        //해법
        makeTower(0, 0);
 
        //출력
        cout << "#" << test_case << " " << answer - B << "\n";
    }
 
    //종료
    return 0;
}
