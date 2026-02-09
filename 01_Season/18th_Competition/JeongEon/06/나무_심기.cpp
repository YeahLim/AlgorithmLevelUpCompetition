#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int result = - 10001;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] * arr[j] > result){
                result = arr[i] * arr[j];
            }
        }
    }

    cout << result;
    
   return 0;
}
