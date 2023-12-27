#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    if(90 <= N && N <= 100) cout << "A";
    else if(80 <= N) cout << "B";
    else if(70 <= N) cout << "C";
    else if(60 <= N) cout << "D";
    else cout << "F";
    return 0;
}