#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input, res = 1;
    for(int i = 0; i < 3; i++){
        cin >> input;
        res *= input;
    }
    while(res > 0){
        arr[res % 10]++;
        res /= 10;
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}
