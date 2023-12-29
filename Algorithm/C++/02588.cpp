#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, e;
    cin >> a >> b;
    c = a * (b % 10);
    d = a * ((b / 10) % 10);
    e = a * (b / 100);
    cout << c << "\n" << d << "\n" << e << "\n";
    cout << e * 100 + d * 10 + c;
}