#include <bits/stdc++.h>
using namespace std;
int result, input;
string res = "DCBAE";
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 3; i++){
        result = 0;
        for(int c = 0; c < 4; c++){
            cin >> input;
            result += input;
        }
        cout << res[result] << "\n";
    }

    return 0;
}