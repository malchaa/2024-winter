#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A+B)%C << "\n";
    cout << ((A%C)+(B%C))%C << "\n";
    cout << (A*B)%C << "\n";
    cout << ((A%C)*(B%C))%C;
}