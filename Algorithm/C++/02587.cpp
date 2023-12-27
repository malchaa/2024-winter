#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input, sum=0;
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> input;
        sum += input;
        arr[i] = input;
    }
    sort(arr, arr+5);
    cout << sum / 5 << "\n" << arr[2];
    return 0;
}