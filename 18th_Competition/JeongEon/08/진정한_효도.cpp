#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[3][3];

int Garo(){
    vector<int> result;
    for(int i = 0; i < 3; i++){
        if(arr[i][0] == arr[i][1]  && arr[i][0]== arr[i][2] && arr[i][1] == arr[i][2]){
            // 모두 같은 수 이면
            return 0;
        }
        else if(arr[i][0] == arr[i][1]){
            // 0 1이 같으면
            result.push_back(abs(arr[i][0] - arr[i][2]));
        }
        else if(arr[i][0] == arr[i][2] || arr[i][1] == arr[i][2]){
            // 0 2나 1 2가 같으면
            result.push_back(abs(arr[i][0] - arr[i][1]));
        }
        else{
            // 다 다르다면
            result.push_back(2);
        }
    }

    sort(result.begin(), result.end());

    return result[0];
}

int Sero(){
    vector<int> result;
    for(int i = 0; i < 3; i++){
        if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[1][i] == arr[2][i]){
            // 모두 같은 수 이면
            return 0;
        }
        else if(arr[0][i] == arr[1][i]){
            // 0 1이 같으면
            result.push_back(abs(arr[0][i] - arr[2][i]));
        }
        else if(arr[0][i] == arr[2][i] || arr[1][i] == arr[2][i]){
            // 0 2나 1 2가 같으면
            result.push_back(abs(arr[0][i] - arr[1][i]));
        }
        else{
            // 다 다르다면
            result.push_back(2);
        }
    }

    sort(result.begin(), result.end());

    return result[0];
}

int main(int argc, char** argv)
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    int S = Sero();
    int G = Garo();
    if(S >= G){
        cout << G;
    }
    else{
        cout << S;
    }
    
   return 0;
}
