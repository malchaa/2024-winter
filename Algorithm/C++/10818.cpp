#include<bits/stdc++.h>
using namespace std;
int arr[1000001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input;
    cin >> input;
    for(int i = 0 ; i < input ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+input);
    cout<< arr[0] << " " << arr[input-1];
    return 0;
}
