#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>


using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;

    vector<int> vec;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    vector<pair<int, int>> arr;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            arr.push_back({vec[i], vec[j]});
        }
    }

    sort(arr.begin(), arr.end());

    int length = 1000001;
    int result = 0;
    for(int i = 0; i < arr.size(); i++){
        if(abs(arr[i].first - arr[i].second) < length){
            length = abs(arr[i].first - arr[i].second);
            result = 1;
        }
        else if(abs(arr[i].first - arr[i].second) == length){
            result++;
        }
    }

    cout << result;
    
   return 0;
}
