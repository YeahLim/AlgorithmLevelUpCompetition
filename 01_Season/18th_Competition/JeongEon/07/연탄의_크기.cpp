#include<iostream>
#include <vector>
#include <algorithm>

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

    int result = 1;
    for(int i = 2; i <= vec[n-1]; i++){
        int cnt = 0;
        for(int j = 0; j < n ; j++){
            if(vec[j] % i == 0){
                cnt++;
            }
        }
        if(cnt > result){
            result = cnt;
        }
    }

    cout << result << endl;
   return 0;
}
