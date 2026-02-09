#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    int N;
    cin >> N;

    vector<pair<int, int>> arr;
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        arr.push_back({y, x});
    }

    sort(arr.begin(), arr.end());

    int result = 0;
    for(int i = 0; i < N; i++){
        if(arr[i].first < arr[result].first){
            result = i;
        }
        else if(arr[i].first == arr[result].first){
            if(arr[i].second > arr[result].second){
                result = i;
            }
        }
    }

    cout << arr[result].second << " " << arr[result].first;
    
    return 0;
}
