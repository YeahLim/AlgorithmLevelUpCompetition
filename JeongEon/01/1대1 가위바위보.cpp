#include <iostream>
 
using namespace std;
// 가위 1, 바위 2, 보 3
int main(void){
    int A, B;
    cin >> A >> B;
     
    if(A > B){
        cout << "A" << '\n';
    }
    else{
        cout << "B" << '\n';
    }
     
    return 0;   
}
